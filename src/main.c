#include <stdio.h>
#include "hash_table.c"

int main() {
  ht_hash_table* ht = ht_new();
  ht_insert(ht, "0", "a");
  ht_insert(ht, "1", "b");
  ht_insert(ht, "2", "c");
  ht_insert(ht, "3", "d");
  ht_insert(ht, "4", "e");
  char* result = ht_search(ht, "a");
  printf("%s\n", result);
}
