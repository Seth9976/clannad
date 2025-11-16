// 函数: sub_5afa20
// 地址: 0x5afa20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg4

if (ebx == 0xffffffff)
    ebx = arg1[0x5b]

int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, arg1[0x2a] - arg1[0x29])
int32_t edx_1 = edx s>> 8
int32_t esi_2 = (edx_1 u>> 0x1f) + edx_1
sub_550ad0(arg1, esi_2 + 1)
int32_t eax_2 = arg1[0x2e]
int32_t ecx_3 = esi_2 * 0x580
void* esi_4 = arg1[0x29] + ecx_3

if (eax_2 != *(esi_4 + 0x25c))
    *(esi_4 + 0x25c) = eax_2
    sub_5b2ab0(esi_4)
    bool cond:0_1 = *(esi_4 + 0x2a4) u< 8
    void* eax_3 = esi_4 + 0x290
    *(eax_3 + 0x10) = 0
    
    if (not(cond:0_1))
        eax_3 = *eax_3
    
    *eax_3 = 0
    *(esi_4 + 0x2a8) = 1

int32_t var_14_1 = arg1[0x58]
int32_t result = sub_5b3c70(arg1[0x29] + ecx_3, arg2, arg3, arg1[0x56], arg1[0x59], arg1[0x5a], 
    ebx, arg1[0x5d], arg1[0x5e], arg1[0x54], arg1[0x55], arg1[0x57])
return result
