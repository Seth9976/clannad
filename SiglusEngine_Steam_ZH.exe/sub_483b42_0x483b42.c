// 函数: sub_483b42
// 地址: 0x483b42
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_2c = edi
int32_t* esi_1 = *(arg1 + 8) + 0x20
int32_t var_18 = *esi_1
void var_14
void* edi_1 = &var_14
void* esi_2 = &esi_1[1]
*edi_1 = *esi_2
void* edi_2 = edi_1 + 4
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
int32_t* edi_5 = arg2
int32_t* var_1c = arg2
void** result = arg3
int32_t i = 4
int32_t* esi_6 = &var_18
bool cond:1 = false

while (i != 0)
    int32_t temp1_1 = *esi_6
    int32_t temp2_1 = *edi_5
    cond:1 = temp1_1 != temp2_1
    esi_6 = &esi_6[1]
    edi_5 = &edi_5[1]
    i -= 1
    
    if (temp1_1 != temp2_1)
        break

void** result_1 = result

if (cond:1)
    int32_t esi_7 = 0
    
    if (*(arg1 + 0x14) u> 0)
        while (true)
            if ((*(**(*(arg1 + 0x20) + (esi_7 << 2)) + 0x38))(var_1c, result).b != 0)
                goto label_483b80
            
            esi_7 += 1
            
            if (esi_7 u>= *(arg1 + 0x14))
                break
            
            result = result_1
    
    result.b = 0
else
    *result = arg1
label_483b80:
    result.b = 1

sub_745f2b(__security_cookie_1)
return result
