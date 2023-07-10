# C - Hash tables

***In computer science***, a `hash table`, also known as a `hash map`, is a data structure that allows for efficient retrieval and storage of key-value pairs. It provides a way to map keys to corresponding values using a `hash function`, which calculates an `index` or a `hash code` based on the `key`.

In a `hash table`, the keys are unique, and the hash function converts each key into an index within an `array-like structure` called a `hash table`. The index represents the location or bucket where the corresponding value will be stored. This allows for fast retrieval of values based on their associated keys.

## A Simplified overview of how hash tables work

1. `Hash Function`: A hash function takes a key as input and computes a hash code or an index value. [The goal of the hash function]() is to distribute keys uniformly across the available hash table slots.

2. `Indexing`: The hash code produced by the hash function is used to determine the index or the bucket location within the hash table. This index serves as the storage location for the corresponding key-value pair.

3. `Collision Handling`: In some cases, [different keys](#keys) can produce the [same hash code](Same#code), resulting in a [collision](confusion). Collisions are resolved by employing collision resolution techniques, such as `chaining` (using linked lists or arrays within `each bucket`) or open addressing (probing adjacent buckets until an empty slot is found).

4. `Retrieval and Insertion`: To retrieve a value from the hash table, the key is hashed to find the corresponding index. The value associated with that key is then retrieved from the bucket. When inserting a new key-value pair, the hash function is used to find the appropriate index, and the key-value pair is stored in the corresponding bucket.

Hash tables provide constant-time average-case complexity for insertion, retrieval, and deletion operations, making them highly efficient for large data sets. However, the performance depends on the quality of the hash function and the handling of collisions.

*Hash tables have numerous applications, including symbol tables in compilers, database indexing, caching mechanisms, and implementing associative arrays or dictionaries in various programming languages.*

The implementation of hash tables can vary across programming languages, with built-in or library-provided implementations available in many high-level languages like `Python`, `Java`, `C++`, and `others`. These implementations handle the details of hashing and collision resolution, allowing developers to focus on using the hash table functionality in their applications.
