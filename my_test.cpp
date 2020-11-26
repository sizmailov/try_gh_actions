
int add(int a, int b) {
    return a + b;
}


int sub(int a, int b) {
    return a - b;
}


int main() {

    if (add(1, 2) != 3) { return 1; }
    if (sub(1, 2) != -1) { return 1; }

    return 0;
}
