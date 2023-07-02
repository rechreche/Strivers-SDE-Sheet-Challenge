int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
     sort(at, at+n);
    sort(dt, dt+n);

    int plats=1, totalDeparted=0;

    for(int i=1; i<n; i++){
        if(at[i]>dt[totalDeparted]) {
            totalDeparted++;
        }
        else plats++;
    }
    return plats;

}
