// 函数: sub_6382a0
// 地址: 0x6382a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = arg1[0x15]

if (ecx != 0)
    int32_t* var_10_1 = arg1
    void* var_14_1 = ecx
    sub_6428c0(ecx, arg1[0x16])
    j__free(arg1[0x15])
    arg1[0x15] = 0
    arg1[0x16] = 0
    arg1[0x17] = 0

sub_63c2e0(&arg1[3])
int32_t result = *arg1

if (result != 0)
    result = j__free(result)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
