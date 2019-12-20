/*Suppose we have this alternative function that returns a pointer to a memory location to an integer value of zero.

*/

int *allocate_an_integer() {
    int i = 0;
    return &i;
}

int main() {
 /*   int *j;
    j = allocate_an_integer();
    int k = *j;
    return 0;
    */
    int *i = new int;
	*i = 0;
	int &j = *i;
	j++;

}

/* What value is variable k assigned and why? */

