/*The A3 File  --- A3 A3.x*/

/*Structure*/
typedef string s<10000>;

struct newString{
	s content;
};

struct newList{
		int size;
		int arr[50];
};

struct listValues{
	newList l1;
	newList l2;
};

struct newComplex{
		float real;
		float img;
};

struct complexValues{
	newComplex c1;
	newComplex c2;
};

/*Program, version and procedure definition*/

program A3{
	version A3PROG{
		newString hostname() = 1;
		newList mergeSort(listValues) = 2;
		newString encryptedEcho(newString) = 3;
		newString listFiles() = 4;
		newComplex addComplex(complexValues) = 5;
	} = 1;
} = 0x40000002;