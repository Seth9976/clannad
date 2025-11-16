// 函数: sub_44330f
// 地址: 0x44330f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[3]
int32_t eax_2 = (eax & 1) + (eax u>> 1 << 1)
uint32_t ecx_2 = zx.d(arg1[0xd].w)
arg1[5] = eax_2
uint32_t eax_3 = eax_2 + (ecx_2 << 1)
int32_t result = 0
bool cond:0 = arg1[4] u>= eax_3
arg1[3] = eax_3

if (not(cond:0))
    int32_t edi
    int32_t var_c_1 = edi
    int32_t eax_4 = sub_745f3f(eax_3)
    
    if (eax_4 != 0)
        int32_t eax_5 = *arg1
        
        if (eax_5 != 0)
            j__free(eax_5)
            *arg1 = 0
        
        int32_t eax_6 = arg1[3]
        *arg1 = eax_4
        arg1[4] = eax_6
    else
        result = 0x8007000e

return result
