// 函数: sub_63dba0
// 地址: 0x63dba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0xc] u>= 8)
    j__free(arg1[7])

arg1[0xc] = 7
arg1[0xb] = 0
arg1[7].w = 0
int32_t result = arg1[3]

if (result != 0)
    result = j__free(result)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

int32_t* ecx = *arg1

if (ecx != 0)
    int32_t* var_10_3 = arg1
    int32_t* var_14_1 = ecx
    sub_597720(ecx, arg1[1])
    result = j__free(*arg1)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
