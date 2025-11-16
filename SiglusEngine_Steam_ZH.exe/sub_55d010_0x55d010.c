// 函数: sub_55d010
// 地址: 0x55d010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx_2 = (arg3 - arg2) s/ 0x164
int32_t ecx_1 = arg1[2] - *arg1
int32_t eax_1
int32_t edx_3
edx_3:eax_1 = muls.dp.d(0xb81702e1, ecx_1)
int32_t esi_4 = ecx_1 s/ 0x164

if (esi_4 u< ebx_2)
    uint32_t ecx_3 = esi_4 u>> 1
    int32_t esi_5
    
    if (&data_b81700:2 - ecx_3 u>= esi_4)
        esi_5 = esi_4 + ecx_3
    else
        esi_5 = 0
    
    void* ecx_4 = *arg1
    
    if (esi_5 u< ebx_2)
        esi_5 = ebx_2
    
    if (ecx_4 != 0)
        int32_t var_14_1 = arg3
        void* var_18_1 = ecx_4
        sub_54d5d0(ecx_4, arg1[1])
        j__free(*arg1)
        *arg1 = 0
        arg1[1] = 0
        arg1[2] = 0
    
    eax_1, ecx_1 = sub_54d450(arg1, esi_5)

int32_t var_14_3 = arg3
int32_t var_18_2 = ecx_1
int32_t* result = sub_54d6f0(eax_1, arg3, arg2, *arg1)
arg1[1] = result
return result
