// 函数: sub_69bb50
// 地址: 0x69bb50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0xe] u>= 8)
    j__free(arg1[9])

arg1[0xe] = 7
arg1[0xd] = 0
arg1[9].w = 0

if (arg1[8] u>= 8)
    j__free(arg1[3])

int32_t result = 0
arg1[8] = 7
arg1[7] = 0
arg1[3].w = 0
void* ecx = *arg1

if (ecx != 0)
    int32_t* var_10_3 = arg1
    void* var_14_1 = ecx
    sub_66b250(ecx, arg1[1])
    result = j__free(*arg1)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
