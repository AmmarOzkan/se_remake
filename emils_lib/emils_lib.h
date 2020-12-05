#pragma once
#include <iostream>

#ifdef MYLIBRARY_EXPORT
#define MYLIBRARY_API /*DLLEXPORT*/
#else
#define MYLIBRARY_API /*DLLIMPORT*/
#endif

#define LOG(x) std::cout<<x<<std::endl;
#define LO(x) std::cout<<x;
#define rev(x) x=!x;
#define STOP while(true);

template<class T> void operator+=(T& a, T& b);
template<class T> void operator-=(T& a, T& b);
template<class T> bool operator!=(T a, T b);

namespace el {
	MYLIBRARY_API std::string getVersion();
	namespace Classic {
		/// <param name="c">Elementler</param>
		/// <returns>Kaç elemente sahip olduðu</returns>
		template <class T> MYLIBRARY_API int getNumberOfElements(T* c);
		/// <summary>
		/// 2 deðiþkenin yerini deðiþtirir
		/// </summary>
		/// <param name="a">1.</param>
		/// <param name="b">2.</param>
		template <class T> MYLIBRARY_API inline void swap(T& a, T& b);
		/// <summary>
		/// Sayýyý array elemanýna göre arttýrýr. Eðer array eleman sayýsýndan büyük birþey olursa counter false döndürür.
		/// </summary>
		/// <param name="array">Array</param>
		/// <param name="counter">Sayý</param>
		/// <returns>Boolean</returns>
		template<class ARRAYTYPE> MYLIBRARY_API bool control(ARRAYTYPE array[], int& counter);
	}
	namespace StrCalc {
		/// <param name="str">Yazý</param>
		/// <returns>Yazýnýn uzunluðu</returns>
		MYLIBRARY_API int glos(std::string str);
		/// <param name="string">A yazýsý</param>
		/// <param name="wllSearch">B yazýsý</param>
		/// <returns>a b'yi içeriyormu?</returns>
		MYLIBRARY_API bool isContains(std::string string, std::string wllSearch);
		/// <param name="string">A</param>
		/// <param name="wllSearch">B</param>
		/// <returns>B A'nýn neresinde</returns>
		MYLIBRARY_API int whereContains(std::string string, std::string wllSearch);
		/// <param name="string">A</param>
		/// <param name="c">B</param>
		/// <returns>A kaç tane B içeriyor</returns>
		MYLIBRARY_API int howManyContains(std::string string, char c);
		/// <param name="string">A</param>
		/// <param name="a">B</param>
		/// <param name="place">C</param>
		/// <returns>A'nýn B'ye göre bölümlerinden C'incisi </returns>
		MYLIBRARY_API int getThats(std::string string, char a, int place);
		/// <param name="string">A</param>
		/// <param name="p1">B</param>
		/// <param name="p2">C</param>
		/// <returns>A yazýsýnýn B ve C'inci harfleri arasýndaki yazýyý döndürür</returns>
		MYLIBRARY_API std::string getBetweenThat(std::string string, int p1, int p2);
		/// <param name="str">A</param>
		/// <param name="c">B</param>
		/// <returns>A'yý B'ye göre bölüp bölümlerini std::vector<std::string> tipinden döndürür</returns>
		MYLIBRARY_API std::vector<std::string> split(std::string str, char c);
		/// <summary>
		/// A=selam, "ben, patates" B=, C=" olmak üzere döndürülecek elemanlar:
		/// [selam] [ben, patates]
		/// </summary>
		/// <param name="str">A</param>
		/// <param name="c">B</param>
		/// <param name="out">C</param>
		/// <returns>A'nýn C'ler içindeki yeri hariç B'ye göre bölünmüþ halini döndürür</returns>
		MYLIBRARY_API std::vector<std::string> splitOut(std::string str, char c,char out);
		/// <param name="str">A</param>
		/// <param name="wllSubtract">B</param>
		/// <returns>A yazýsýndan B yazýsýný çýkarýr</returns>
		MYLIBRARY_API std::string subtract(std::string str, std::string wllSubtract);
		/// <summary>
		/// 100'lük string dizisini yazdýrýr
		/// </summary>
		/// <param name="urArray">Dizi</param>
		MYLIBRARY_API void pFor100(std::string urArray[100]);
		/// <param name="a">A</param>
		/// <param name="place">B</param>
		/// <param name="n">C</param>
		/// <returns>A yazýsýnýn B'lik parçalarýndan C'incisini döndürür</returns>
		MYLIBRARY_API std::string getN(std::string a, int place, int n);
		/// <param name="c">Char</param>
		/// <returns>Char'ý integer tipine dönüþtürür</returns>
		MYLIBRARY_API int toInteger(char c);
		/// <param name="str">Yazý</param>
		/// <returns>Girilen yazýnýn int olup olmadýðý</returns>
		MYLIBRARY_API bool isThisInt(std::string str);
		/// <param name="str">Yazý</param>
		/// <returns>Yazýnýn ters çevrilmiþ hali</returns>
		MYLIBRARY_API std::string reverse(std::string str);
		/// <param name="str">Yazý</param>
		/// <returns>Integer tipine dönüþtürülmüþ hlai</returns>
		MYLIBRARY_API int toInteger(std::string str);
		/// <param name="str">Yazý</param>
		/// <returns>Yazýnýn harflerinin küçültülmüþ hali</returns>
		MYLIBRARY_API std::string toLower(std::string str);
		/// <param name="str">std::vector<std::string></param>
		/// <returns>vektörlerin birleþtirilip tek bir string yapýlmasýndan meydana çýkan </returns>
		MYLIBRARY_API std::string combineVecS(std::vector<std::string> str);
	}

	namespace Inputs {
		/// <summary>
		/// Kullanýcý parametredeki char'ý girene kadar veri almaya devam eder
		/// </summary>
		/// <returns>vector tipinden girilenler</returns>
		MYLIBRARY_API std::vector<std::string> getUntilB(char until);
	}
	namespace Math {
		/// <summary>
		/// Faktöriyel
		/// </summary>
		MYLIBRARY_API int factorial(int a);
		/// <summary>
		/// Mutlak Deðer
		/// </summary>
		/// <typeparam name="T">Deðiþken Tipi</typeparam>
		template <typename T> MYLIBRARY_API T absoluteValue(T a);
		/// <summary>
		/// Hipotenüs
		/// </summary>
		MYLIBRARY_API inline float hypotenuse(float a, float b);
		/// <summary>
		/// Eðer girilen sayý 0 sa 0 0 dan büyükse 1 küçükse -1 döndürür
		/// </summary>
		template <typename T> MYLIBRARY_API int getNepos(T a);
		/// <summary>
		/// Permutasyon
		/// </summary>
		MYLIBRARY_API float permutation(float a, float b);
		/// <summary>
		/// Kombinasyon
		/// </summary>
		MYLIBRARY_API float combination(float a, float b);
		/// <summary>
		/// Büyük olan sayýyý döndürür eðer eþitse b döndürür
		/// </summary>
		template <typename T> MYLIBRARY_API T getBigger(T a, T b);
	}
	namespace Vectors {
		typedef float Vector1;
		struct Vector2 { float x, y; };
		struct Vector3 { float x, y, z; };
		MYLIBRARY_API Vector2 get(float x, float y);
		MYLIBRARY_API Vector3 get(float x, float y, float z);
		/// <summary>
		/// Vector2'yi Vector3'e çevirir
		/// </summary>
		MYLIBRARY_API Vector2 toVector2(Vector3 a);
		/// <summary>
		/// Vector3'ü Vector2'ye çevirir
		/// </summary>
		MYLIBRARY_API Vector3 toVector3(Vector2 a);
		//OPERATÖRLER
		MYLIBRARY_API Vector2 operator+(Vector2 a, Vector2 b);
		MYLIBRARY_API Vector3 operator+(Vector3 a, Vector3 b);
		MYLIBRARY_API Vector3 operator+(Vector3 a, Vector2 b);
		MYLIBRARY_API Vector2 operator-(Vector2 a, Vector2 b);
		MYLIBRARY_API Vector3 operator-(Vector3 a, Vector3 b);
		MYLIBRARY_API Vector3 operator-(Vector3 a, Vector2 b);
		MYLIBRARY_API Vector2 operator*(Vector2 a, Vector2 b);
		MYLIBRARY_API Vector3 operator*(Vector3 a, Vector3 b);
		template<class T> MYLIBRARY_API void operator+=(T& a, T& b);
		template<class T> MYLIBRARY_API void operator-=(T& a, T& b);
		template <class T> MYLIBRARY_API Vector2 operator*(Vector2 a, T b);
		template <class T> MYLIBRARY_API Vector3 operator*(Vector3 a, T b);
		template <class T> MYLIBRARY_API Vector2 operator/(Vector2 a, T b);
		template <class T> MYLIBRARY_API Vector3 operator/(Vector3 a, T b);
		template <class T> MYLIBRARY_API Vector2 operator+(Vector2 a, T b);
		template <class T> MYLIBRARY_API Vector3 operator+(Vector3 a, T b);
		MYLIBRARY_API std::ostream& operator<<(std::ostream& os, Vector3 v);
		MYLIBRARY_API std::ostream& operator<<(std::ostream& os, Vector2 v);
		/// <summary>
		/// Mutlak deðer
		/// </summary>
		MYLIBRARY_API Vector3 absoluteValue(Vector3 a);
		/// <summary>
		/// Vektörler arasýndaki uzaklýk
		/// </summary>
		MYLIBRARY_API Vector1 distance(Vector1 a, Vector1 b);
		/// <summary>
		/// Vektörler arasýndaki uzaklýk
		/// </summary>
		MYLIBRARY_API Vector2 distance(Vector2 a, Vector2 b);
		/// <summary>
		/// Vektörler arasýndaki uzaklýk
		/// </summary>
		MYLIBRARY_API Vector3 distance(Vector3 a, Vector3 b);

		/// <summary>
		/// Vektör noktasý ile 0,0,0 arasýndaki çizginin uzaklýðýný hesaplar
		/// </summary>
		MYLIBRARY_API float vectorTenuse(Vector3 a);
		/// <summary>
		/// Vektör noktasý ile 0,0 arasýndaki çizginin uzaklýðýný hesaplar
		/// </summary>
		MYLIBRARY_API float vectorTenuse(Vector2 a);
		/// <summary>
		/// Math::Nepos gibi ancak Vectorler için çalýþýyor
		/// </summary>
		MYLIBRARY_API Vector3 getVectorNepos(Vector3 a);
		/// <summary>
		/// Math::Nepos gibi ancak Vectorler için çalýþýyor
		/// </summary>
		MYLIBRARY_API Vector2 getVectorNepos(Vector2 a);
		/// <summary>
		/// Bu bunun neresinde
		/// </summary>
		MYLIBRARY_API Vector1 where(Vector1 v1, Vector1 v2);
		/// <summary>
		/// Bu bunun neresinde
		/// </summary>
		MYLIBRARY_API Vector2 where(Vector2 v1, Vector2 v2);
		/// <summary>
		/// Bu bunun neresinde
		/// </summary>
		MYLIBRARY_API Vector3 where(Vector3 v1, Vector3 v2);
	}
	namespace Geo {
		typedef int angle;
		struct Angle2 { Vectors::Vector2 v; angle angle; };
		/// <param name="x">X</param>
		/// <param name="y">Y</param>
		/// <param name="angleD">int açý = D</param>
		/// <returns>posizyonu x y açýsý D olan açý döndürür</returns>
		MYLIBRARY_API Angle2 getAngle(float x, float y, angle angleD);
		MYLIBRARY_API bool operator==(Angle2 a, Angle2 b);
		struct Triangle2 { Angle2 a, b, c; }; 
		/// <returns>3 Angledan oluþan üçgen döndürür</returns>
		MYLIBRARY_API Triangle2 getTriangle(Angle2 a, Angle2 b, Angle2 c);
		/// <returns>Üçgenler arasý farklý olan açýyý döndürür</returns>
		MYLIBRARY_API Angle2 getDiffAngle(Triangle2 t1, Triangle2 t2);
		struct Rectangle2 { Angle2 a, b, c, d; };
		/// <returns>4 Açýdan oluþan dikdörtgen</returns>
		MYLIBRARY_API Rectangle2 getRectangle(Angle2 a, Angle2 b, Angle2 c, Angle2 d);
		/// <returns>2 üçgeni birleþtirerek oluþturulan dikdörtgen</returns>
		MYLIBRARY_API Rectangle2 getRectangle(Triangle2 a, Triangle2 b);
		MYLIBRARY_API std::ostream& operator<<(std::ostream& os, Angle2 v);
		MYLIBRARY_API std::ostream& operator<<(std::ostream& os, Rectangle2 v);
		/// <returns>Üçgenin hipotenüsünü hesaplar B 90 derece kabul edilir</returns>
		MYLIBRARY_API float getHypotenus(Triangle2 triangle);
		/// <returns>Üçgenlik kuralýna uyuyormu?</returns>
		MYLIBRARY_API bool isTrue(Triangle2 triangle);
		/// <returns>Dikdörtgenlik kuralýna uyuyormu?</returns>
		MYLIBRARY_API bool isTrue(Rectangle2 rectangle);
	}

#define JJNumber 0.4
	namespace Physics {
		typedef int electron; typedef int center;
		struct Atom1 { Vectors::Vector1 v; electron charge; center proton, neutron; };
		MYLIBRARY_API Atom1 get(float x, electron charge, center proton, center neutron);

		struct Atom2 { Vectors::Vector2 v; electron charge; center proton, neutron; };
		MYLIBRARY_API Atom2 get(float x, float y, electron charge, center proton, center neutron);

		struct Atom3 { Vectors::Vector3 v; electron charge; center proton, neutron; };
		MYLIBRARY_API Atom3 get(float x, float y, float z, electron charge, center proton, center neutron);

		/// <summary>
		/// Çekim kuvvetini hesaplar
		/// </summary>
		/// <param name="distance">2 þey arasý uzaklýk</param>
		/// <param name="e1">Elektron1</param>
		/// <param name="e2">Elektron2</param>
		MYLIBRARY_API float gravForce(float distance, electron e1, electron e2);
		MYLIBRARY_API float electronJumpForce(float distance, electron e1, electron e2, center p1, center p2);
		MYLIBRARY_API float chargeForce(float distance, int c1, int c2);
		MYLIBRARY_API Vectors::Vector2 chargeForce(Vectors::Vector2 distance, int c1, int c2);
		MYLIBRARY_API Vectors::Vector2 chargeForce(Vectors::Vector2 v1, Vectors::Vector2 v2, int c1, int c2);
		MYLIBRARY_API Vectors::Vector3 getForce(Atom3& a, Atom3& b);
		MYLIBRARY_API Vectors::Vector2 getForce(Atom2 a, Atom2 b);
		MYLIBRARY_API Vectors::Vector1 getForce(Atom1 a, Atom1 b);

		//detailing atom

		struct Matter { Vectors::Vector2 v; int charge; }; Matter get(Vectors::Vector2 v, int charge);
		MYLIBRARY_API Vectors::Vector2 chargeForce(Matter e1, Matter e2);

		template<int NumberOfElectrons, int NumberOfNeutrons, int NumberOfProtons>class DAtom {
		private:
			Matter Electrons[NumberOfElectrons], Neutrons[NumberOfNeutrons], Protons[NumberOfProtons];
		public:
			DAtom() {
				for (int i = 0; i < NumberOfElectrons; i++) { Electrons[i].v = { 0.0,0.0 }; Electrons[i].charge = -1; }
				for (int i = 0; i < NumberOfNeutrons; i++) { Neutrons[i].v = { 0.0,0.0 }; Neutrons[i].charge = 0; }
				for (int i = 0; i < NumberOfProtons; i++) { Protons[i].v = { 0.0,0.0 }; Protons[i].charge = +1; }
			}

			void setElectronPos(int which, Vectors::Vector2 p) { Electrons[which].v = p; }
			void setNeutronPos(int which, Vectors::Vector2 p) { Neutrons[which].v = p; }
			void setProtonPos(int which, Vectors::Vector2 p) { Protons[which].v = p; }

			Matter getProton(int which) { return Protons[which]; }
			Matter getElectron(int which) { return Electrons[which]; }
			Matter getNeutron(int which) { return Neutrons[which]; }
			int getNOE() { return NumberOfElectrons; }
			int getNOP() { return NumberOfProtons; }
			int getNON() { return NumberOfNeutrons; }

			void calculate() {
				Vectors::Vector2 electronsForce[NumberOfElectrons];
				Vectors::Vector2 protonsForce[NumberOfProtons];
				Vectors::Vector2 neutronsForce[NumberOfNeutrons];

				for (int i = 0; i < NumberOfElectrons; i++) {
					for (int j = 0; j < NumberOfProtons; j++) electronsForce[i] += chargeForce(Electrons[i], Protons[j]);
					for (int j = 0; j < NumberOfElectrons; j++) if (i != j) electronsForce[i] += chargeForce(Electrons[i], Electrons[j]);
					for (int j = 0; j < NumberOfNeutrons; j++) electronsForce[i] += chargeForce(Electrons[i], Neutrons[j]);
				}for (int i = 0; i < NumberOfProtons; i++) {
					for (int j = 0; j < NumberOfProtons; j++) if (i != j) protonsForce[i] += chargeForce(Protons[i], Protons[j]);
					for (int j = 0; j < NumberOfElectrons; j++) protonsForce[i] += chargeForce(Protons[i], Electrons[j]);
					for (int j = 0; j < NumberOfNeutrons; j++) protonsForce[i] += chargeForce(Protons[i], Neutrons[j]);
				}for (int i = 0; i < NumberOfNeutrons; i++) {
					for (int j = 0; j < NumberOfProtons; j++) neutronsForce[i] += chargeForce(Neutrons[i], Protons[j]);
					for (int j = 0; j < NumberOfElectrons; j++) neutronsForce[i] += chargeForce(Neutrons[i], Electrons[j]);
					for (int j = 0; j < NumberOfNeutrons; j++) if (i != j) neutronsForce[i] += chargeForce(Neutrons[i], Neutrons[j]);
				}
				for (int i = 0; i < NumberOfElectrons; i++) Electrons[i].v += electronsForce[i];
				for (int i = 0; i < NumberOfProtons; i++)Protons[i].v += protonsForce[i];
				for (int i = 0; i < NumberOfNeutrons; i++)Neutrons[i].v += neutronsForce[i];
			}
		};

		template<int T, int T2, int T3> MYLIBRARY_API void writeAtom(DAtom<T, T2, T3> a);
	}
}