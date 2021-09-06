void solve(string &s, int l, int r) {
    if(l>r)
        return;
    swap(s[l++], s[r--]);
    solve(s, l, r);
}

string reverseWord(string str){
    
  //Your code here
  solve(str, 0, str.size()-1);
  return str;
}
