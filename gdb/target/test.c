int main() {
  int flg=0, flg2=1;
  if (flg) {
    puts("true");
    if (flg2) {
      puts("tt");
    } else {
      puts("tf");
    }
  } else {
    puts("false");
    if (flg2) {
      puts("ft");
    } else {
      puts("ff");
    }
  }
  return 0;
}