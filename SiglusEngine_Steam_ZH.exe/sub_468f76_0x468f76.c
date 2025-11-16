// 函数: sub_468f76
// 地址: 0x468f76
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = 0x10
int32_t i

do
    long double x87_r7_2 = fconvert.t(arg1[3]) * fconvert.t(*arg1)
    arg1 = &arg1[4]
    *arg3 = fconvert.s(x87_r7_2)
    arg3 = &arg3[4]
    i = i_1
    i_1 -= 1
    arg3[-3] = fconvert.s(fconvert.t(arg1[-3]) * fconvert.t(arg1[-1]))
    arg3[-2] = fconvert.s(fconvert.t(arg1[-2]) * fconvert.t(arg1[-1]))
    arg3[-1] = arg1[-1]
while (i != 1)
return 0
