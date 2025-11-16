// 函数: sub_4dffb0
// 地址: 0x4dffb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t* (__stdcall** eax_1)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg1, 1, 0x1c)
int32_t result = arg1[0x15]
arg1[0x6d] = eax_1
*eax_1 = sub_4dff30
eax_1[2] = 0
eax_1[3] = 0

if (result != 0)
    int32_t eax_2 = arg1[0x4f]
    eax_1[4] = eax_2
    
    if (arg2 != 0)
        void* eax_3 = *arg1
        *(eax_3 + 0x14) = 4
        return (*eax_3)(arg1)
    
    result = (*(arg1[1] + 8))(arg1, 1, arg1[0x1e] * arg1[0x1c], eax_2)
    eax_1[3] = result

return result
