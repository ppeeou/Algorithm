var by = function (name, minor) {

    return function (o, p) {
        var a,b;
        if (o && p && typeof o === 'object' && typeof p === 'object') {

            if (typeof o === typeof p) {
                a = o[name];
                b = p[name];
                //first 가 같을 경우
                if(a===b){
                    return typeof minor === 'function' ? minor(o,p) : 0;
                }
                if(typeof a === typeof b){
                    return a < b ? -1 : 1;
                }
                return typeof a < typeof b ? -1 : 1;
            }

        }else{
            throw{
                name: 'Error'
            }
        }

    }
}


var arr = [
    { first: "Joe", last: "Besser" },
    { first: "Joe", last: "DeRita" },
    { first: "Lat", last: "Fie" },
    { first: "Curly", last: "eiott" },
    { first: "Mee", last: "azirjmt" },
    { first: "rrzee", last: "beoris" },
    { first: "tcjt", last: "poit" },

]


arr.sort(by("last", by("first")))