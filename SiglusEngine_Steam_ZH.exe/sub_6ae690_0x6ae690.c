// 函数: sub_6ae690
// 地址: 0x6ae690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca999
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* result = arg1
int16_t* result_1 = result
int32_t var_1c = 0
*(result + 0x14) = 7
*(result + 0x10) = 0
*result = 0
int32_t var_8_1 = 0
int32_t var_1c_1 = 1
int16_t* esi

if (arg2[5] u< 8)
    esi = arg2
else
    esi = *arg2

void* ebx = &esi[1]

while (true)
    int32_t* eax_3
    
    if (arg2[5] u< 8)
        eax_3 = arg2
    else
        eax_3 = *arg2
    
    int32_t ecx_1 = arg2[4] * 2
    
    if (esi == eax_3 + ecx_1)
        break
    
    uint32_t ecx_2 = zx.d(*esi)
    int16_t var_30_1
    
    if (ecx_2 == 0x20)
        var_30_1 = 0x3000
    else if (0x21 u<= ecx_2.w && ecx_2 u<= 0x7e)
        var_30_1 = *((ecx_2 << 1) + &data_afff8e)
    else if (0xff61 u> ecx_2.w || ecx_2.w u> 0xff9d)
        var_30_1 = ecx_2.w
    else
        int32_t* eax_6
        
        if (arg2[5] u< 8)
            eax_6 = arg2
        else
            eax_6 = *arg2
        
        result = result_1
        int16_t eax_8
        
        if (ebx == eax_6 + ecx_1 || *ebx != 0xff9e)
            int32_t* eax_9
            
            if (arg2[5] u< 8)
                eax_9 = arg2
            else
                eax_9 = *arg2
            
            result = result_1
            
            if (ebx != eax_9 + ecx_1 && *ebx == 0xff9f)
                eax_8 = *((ecx_2 << 1) + &data_ae01ce)
                goto label_6ae7ae
        else
            eax_8 = *((ecx_2 << 1) + &data_ae024e)
        label_6ae7ae:
            sub_55d330(result, 1, eax_8)
            result = result_1
            esi = &esi[2]
            ebx += 4
            continue
        var_30_1 = *((ecx_2 << 1) + &data_ae008e)
    
    sub_55d330(result, 1, var_30_1)
    result = result_1
    esi = &esi[1]
    ebx += 2

fsbase->NtTib.ExceptionList = ExceptionList
return result
