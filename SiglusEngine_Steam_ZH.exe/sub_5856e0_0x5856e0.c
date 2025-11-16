// 函数: sub_5856e0
// 地址: 0x5856e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b7268
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_44 = arg4
LRESULT hWnd

if (arg3 != 0)
    int32_t ebx_1 = 0
    int32_t eax_9 = (*(arg3 + 0xa8) - *(arg3 + 0xa4)) s/ 0x15fc
    
    if (eax_9 s> 0)
        int32_t edi_1 = 0
        
        do
            int32_t eax_11 = *(arg3 + 0xa4)
            int32_t edx_6
            
            if (*(edi_1 + eax_11 + 0x1ac) == 0)
                int32_t ecx_3 = *(edi_1 + eax_11 + 0x1438) - *(edi_1 + eax_11 + 0x1434)
                int32_t eax_12
                int32_t edx_4
                edx_4:eax_12 = muls.dp.d(0xba506bb7, ecx_3)
                edx_6 = (edx_4 + ecx_3) s>> 0xc
            
            if (*(edi_1 + eax_11 + 0x1ac) != 0 || (edx_6 u>> 0x1f) + edx_6 s> 0)
                LRESULT hWnd_1 = arg2[1]
                
                if (hWnd_1 != 0)
                    hWnd_1 = SendMessageW(hWnd_1, 0x1004, 0, 0)
                
                int32_t* ecx_4 = var_44
                
                if (*ecx_4 s>= hWnd_1)
                    int32_t eax_17 = *(data_bac4e0 + 0x14)
                    
                    if (eax_17 != 0)
                        ecx_4 = eax_17(arg2[1], eax_4)
                
                int32_t* var_58_3 = ecx_4
                int32_t var_40 = 1
                int16_t var_34
                int16_t* eax_18 = sub_6ad9b0(&var_34)
                int32_t var_c_1 = 0
                int32_t ecx_7 = *(data_bac4e0 + 0x34)
                
                if (ecx_7 != 0)
                    ecx_7(arg2[1], *var_44, 0, eax_18, eax_4)
                
                int32_t var_c_2 = 0xffffffff
                int32_t var_20
                
                if (var_20 u>= 8)
                    j__free(var_34.d)
                
                var_20 = 7
                var_34 = 0
                int32_t var_24_1 = 0
                void* ecx_8 = *(arg3 + 0xa4)
                int32_t* var_58_6 = &var_40
                sub_585900(&var_40, *(ecx_8 + edi_1 + 0x80), ecx_8 + edi_1, arg2, var_44, &var_40)
                int32_t* eax_22 = var_44
                *eax_22 += 1
            
            ebx_1 += 1
            edi_1 += 0x15fc
        while (ebx_1 s< eax_9)
    
    int32_t edi_2 = *var_44
    hWnd = arg2[1]
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x1004, 0, 0)
    
    if (hWnd s> edi_2)
        hWnd = *(data_bac4e0 + 0x30)
        
        if (hWnd != 0)
            hWnd = hWnd(arg2[1], edi_2, eax_4)
else
    hWnd = arg2[1]
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x1009, arg3, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_44)
return hWnd
