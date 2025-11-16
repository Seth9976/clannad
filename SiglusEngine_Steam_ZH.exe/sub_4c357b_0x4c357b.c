// 函数: sub_4c357b
// 地址: 0x4c357b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x56] != 0)
    return 0

bool cond:0_1 = arg1[2] u<= 0
int32_t edi
int32_t var_34_1 = edi
int32_t var_2c = 0
void var_28
void* edi_1 = &var_28
*edi_1 = 0
void* edi_2 = edi_1 + 4
*edi_2 = 0
void* var_18_1
__builtin_memset(&var_18_1, 0, 0x14)
*(edi_2 + 4) = 0
int32_t var_c_1

if (not(cond:0_1))
    int32_t i
    
    do
        void* esi_1 = *(arg1[5] + (i << 2))
        
        if ((*(*(arg1[4] + (*(esi_1 + 4) << 2)) + 4) & 0x20) != 0)
            int32_t eax_5 = (*(*arg1 + 0x54))(*(esi_1 + 0x6c))
            int32_t eax_7 = (*(*arg1 + 0x58))(*(esi_1 + 0x6c))
            
            if (eax_5 == 1)
                if (eax_7 == 0)
                    (&var_2c)[*(esi_1 + 0x10)] = 1
                    var_18_1 = *(esi_1 + 0x60)
            else
                int32_t var_14_1
                int32_t var_10_1
                
                if (eax_5 == 5)
                    if (eax_7 == 0 && *(esi_1 + 0x10) u> eax_7 && var_14_1 == eax_7)
                        sub_4a4100(arg1, *(esi_1 + 0x60), 0x11bc, "PSIZE must be a scalar")
                        var_14_1 = 1
                        var_c_1 = 1
                else if (eax_5 == 0xc && eax_7 == 0 && *(esi_1 + 0x10) u> eax_7
                        && var_10_1 == eax_7)
                    sub_4a4100(arg1, *(esi_1 + 0x60), 0x11bc, "FOG must be a scalar")
                    var_10_1 = 1
                    var_c_1 = 1
        
        i += 1
    while (i u< arg1[2])

int32_t ecx_8 = 0

for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
    if ((&var_2c)[i_1] != 0)
        ecx_8 += 1

if (ecx_8 != 4)
    sub_4a4100(arg1, var_18_1, 0x11bd, 
        "vertex shader must minimally write all four components of POSITION")
    var_c_1 = 1

int32_t eax_12 = neg.d(var_c_1)
return sbb.d(eax_12, eax_12, var_c_1 != 0) & 0x80004005
