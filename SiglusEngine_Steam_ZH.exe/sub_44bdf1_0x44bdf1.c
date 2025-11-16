// 函数: sub_44bdf1
// 地址: 0x44bdf1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t ecx = *(arg1 + 0x118)
void* esi_2 = zx.d(*(arg1 + 0x42)) * 0xb4 + *(arg1 + 0xa4)
int32_t result = 0
int32_t edi
int32_t var_20 = edi

if ((ecx.b & 8) != 0)
    if ((ecx.b & 0x10) == 0)
        goto label_44bf16
    
    int32_t var_14_1
    
    if (*(esi_2 + 0x98) == 0)
    label_44be74:
        
        if (*(esi_2 + 0xa0) == 0)
            goto label_44be7f
        
        var_14_1 = 1
    else
        if (arg2 == 0 || *(esi_2 + 0xa0) != 0)
            ecx.w = *(esi_2 + 0xac)
            
            if (ecx.w u< *arg3)
                goto label_44be74
            
            ecx.w = *(esi_2 + 0xae)
            
            if (ecx.w u< arg3[1])
                goto label_44be74
            
            ecx.w = *(esi_2 + 0xb0)
            
            if (ecx.w u>= arg3[2])
                goto label_44bf16
            
            goto label_44be74
        
    label_44be7f:
        var_14_1 = 0
        
        if (arg2 != 0)
            var_14_1 = 1
    
    result.w = *(esi_2 + 0xac)
    ecx.w = *arg3
    int16_t var_10 = result.w
    
    if (result.w u<= ecx.w)
        var_10 = ecx.w
    
    result.w = *(esi_2 + 0xae)
    ecx.w = arg3[1]
    int16_t var_e_1 = result.w
    
    if (result.w u<= ecx.w)
        var_e_1 = ecx.w
    
    result.w = *(esi_2 + 0xb0)
    ecx.w = arg3[2]
    int16_t var_c_1 = result.w
    
    if (result.w u<= ecx.w)
        var_c_1 = ecx.w
    
    result = sub_44b414(arg1, var_14_1, &var_10)
    
    if (result s>= 0)
        *(esi_2 + 0xa0) = var_14_1
        ecx.w = var_10
        *(esi_2 + 0xac) = ecx.w
        ecx.w = var_e_1
        *(esi_2 + 0xae) = ecx.w
        ecx.w = var_c_1
        *(esi_2 + 0xb0) = ecx.w
    label_44bf16:
        
        if (*(esi_2 + 0x90) != 0)
            ecx.w = *(esi_2 + 0xb2)
        
        if (*(esi_2 + 0x90) == 0 || ecx.w u< arg3[3])
            result.w = *(esi_2 + 0xb2)
            int16_t* edi_1
            edi_1.w = arg3[3]
            
            if (result.w u> edi_1.w)
                edi_1.w = result.w
            
            int16_t var_a_1 = edi_1.w
            result = sub_44b545(arg1, nullptr, &var_10)
            
            if (result s>= 0)
                *(esi_2 + 0xb2) = edi_1.w

sub_745f2b(__security_cookie_1)
return result
