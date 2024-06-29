for i in {1..10000}
do
echo "Числова Екатерина Владимировна, 02.12.2005, г.Санкт-Петербург, школа №180" >> ist-331_chislova_EV_LR4_1.txt
done
iconv -c -s -f utf-8 -t WINDOWS-1251 ist-331_chislova_EV_LR4_1.txt > ist-331_chislova_EV_LR4_1251.txt
iconv -c -s -f utf-8 -t 866 ist-331_chislova_EV_LR4_1.txt > ist-331_chislova_EV_LR4_866.txt
iconv -c -s -f utf-8 -t utf-8 ist-331_chislova_EV_LR4_1.txt > ist-331_chislova_EV_LR4_65001.txt
cat ist-331_chislova_EV_LR4_866.txt ist-331_chislova_EV_LR4_1251.txt ist-331_chislova_EV_LR4_65001.txt >> ist-331_chislova_EV_LR4_rez.txt
