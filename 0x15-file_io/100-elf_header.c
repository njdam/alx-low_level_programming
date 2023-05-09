#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void elf_check(unsigned char *el_id);
void magic_print(unsigned char *el_id);
void class_print(unsigned char *el_id);
void data_print(unsigned char *el_id);
void version_print(unsigned char *el_id);
void osabi_print(unsigned char *el_id);
void abi_print(unsigned char *el_id);
void type_print(unsigned int el_type, unsigned char *el_id);
void entry_print(unsigned long int el_entry, unsigned char *el_id);
void elf_close(int elf);

/**
 * main - is a function to display information from an ELF header;
 * @argc: is number of program command line arguments;.
 * @argv: is an array of pointers to program command line arguments;
 *
 * Return: value 0 for success;
 * Error, print Error msg and exit with code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, rd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		elf_close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(fd, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		elf_close(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_check(header->e_ident);
	printf("ELF Header:\n");
	magic_print(header->e_ident);
	class_print(header->e_ident);
	data_print(header->e_ident);
	version_print(header->e_ident);
	osabi_print(header->e_ident);
	abi_print(header->e_ident);
	type_print(header->e_type, header->e_ident);
	entry_print(header->e_entry, header->e_ident);
	free(header);
	elf_close(fd);

	return (0);
}

/**
 * elf_check - a function to check if a file is an ELF file;
 * @el_id: is a pointer to an array of ELF magic numbers;
 *
 * Return: is nothing but exit code is 98 on file not ELF.
 */
void elf_check(unsigned char *el_id)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (el_id[idx] != 127 &&
				el_id[idx] != 'E' &&
				el_id[idx] != 'L' &&
				el_id[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic_print - a function to print magic numbers of an ELF header;
 * @el_id: is a pointer to an array of ELF magic numbers;
 *
 * Return: is nothing.
 */
void magic_print(unsigned char *el_id)
{
	int index = 0;

	printf(" Magic: ");

	for (; index < EI_NIDENT; index++)
	{
		printf("%02x", el_id[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_print - a function to print class of an ELF header;
 * @el_id: is a pointer to an array of ELF magic numbers;
 *
 * Return: is nothing.
 */
void class_print(unsigned char *el_id)
{
	printf("  Class:                             ");

	switch (el_id[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", el_id[EI_CLASS]);
	}
}

/**
 * data_print - is a function to print data of an ELF header;
 * @el_id: is a pointer to an array of ELF magic numbers;
 *
 * Return: is nothing.
 */
void data_print(unsigned char *el_id)
{
	printf("  Data:                              ");

	switch (el_id[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", el_id[EI_CLASS]);
	}
}

/**
 * version_print - is a function to print version of an ELF header;
 * @el_id: is a pointer to an array of ELF magic numbers;
 *
 * Return: is nothing.
 */
void version_print(unsigned char *el_id)
{
	printf("  Version:                           %d",
			el_id[EI_VERSION]);

	switch (el_id[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * osabi_print - is a function to print os/abi of an ELF header;
 * @el_id: is a pointer to an array of ELF magic numbers;
 *
 * Return: is nothing.
 */
void osabi_print(unsigned char *el_id)
{
	printf("  OS/ABI:                            ");

	switch (el_id[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", el_id[EI_OSABI]);
	}
}

/**
 * abi_print - is a function to print abi version of an ELF header;
 * @el_id: is a pointer to an array of ELF magic numbers;
 *
 * Return: is nothing.
 */
void abi_print(unsigned char *el_id)
{
	printf("  ABI Version:                       %d\n",
			el_id[EI_ABIVERSION]);
}

/**
 * type_print - is a function to print type of an ELF header;
 * @el_type: is a type of an ELF;
 * @el_id: is a pointer to an array of ELF magic numbers;
 *
 * Return: is nothing.
 */
void type_print(unsigned int el_type, unsigned char *el_id)
{
	if (el_id[EI_DATA] == ELFDATA2MSB)
		el_type >>= 8;

	printf("  Type:                              ");

	switch (el_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", el_type);
	}
}

/**
 * entry_print - is a function to print an entry of an ELF header;
 * @el_entry: is an entry of an ELF;
 * @el_id: is a pointer to an array of ELF magic numbers;
 *
 * Return: is nothing.
 */
void entry_print(unsigned long int el_entry, unsigned char *el_id)
{
	printf("  Entry point address:               ");

	if (el_id[EI_DATA] == ELFDATA2MSB)
	{
		el_entry = ((el_entry << 8) & 0xFF00FF00) |
			  ((el_entry >> 8) & 0xFF00FF);
		el_entry = (el_entry << 16) | (el_entry >> 16);
	}

	if (el_id[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)el_entry);
	else
		printf("%#lx\n", el_entry);
}

/**
 * elf_close - is a function to close a file with an ELF header;
 * @elf: is a descripter of an elf;
 *
 * Return: is nothing.
 */
void elf_close(int elf)
{
	int cl = close(elf);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
