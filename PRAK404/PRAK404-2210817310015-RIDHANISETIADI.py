while True:   
    print(" program :")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    program = int(input("Pilih program yang mau dimasukkan :"))
    if program == 1:
        nilai1 = int(input("Masukkan nilai 1 :"))
        nilai2 = int(input("Masukkan nilai 2 :"))
        penjumlahan = nilai1 + nilai2
        print("Hasil nilai1 %d + nilai2 %d adalah : %d"%(nilai1,nilai2,penjumlahan))
    elif program == 2:
        nilai1 = int(input("Masukkan nilai 1 :"))
        nilai2 = int(input("Masukkan nilai 2 :"))
        pengurangan = nilai1 - nilai2
        print("Hasil nilai1 %d - nilai2 %d adalah : %d"%(nilai1,nilai2,pengurangan))
    elif program == 3:
        nilai1 = int(input("Masukkan nilai 1 :"))
        nilai2 = int(input("Masukkan nilai 2 :"))
        perkalian = nilai1 * nilai2
        print("Hasil nilai1 %.2f * nilai2 %.2f adalah : %.2f"%(nilai1,nilai2,perkalian))
    elif program == 4:
        nilai1 = int(input("Masukkan nilai 1 :"))
        nilai2 = int(input("Masukkan nilai 2 :"))
        pembagian = nilai1 / nilai2
        print("Hasil nilai1 %d / nilai2 %d adalah : %d"%(nilai1,nilai2,pembagian))
    elif program == 5:
        print("terima kasih telah menggunakan kalkulator ridhani setiadi")
        break
    else :
        print("Input anda salah, silahkan coba lagi")
    
        
