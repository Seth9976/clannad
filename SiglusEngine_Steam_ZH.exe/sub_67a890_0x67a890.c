// 函数: sub_67a890
// 地址: 0x67a890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c7338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_a4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = *(arg1 + 0x24)
LRESULT esi

if (hWnd != 0)
    LRESULT eax_5 = SendMessageW(hWnd, 0x130b, 0, 0)
    esi = eax_5
    
    if (eax_5 s< 0 || eax_5 s>= *(arg1 + 0x6d4))
        esi = 0
else
    esi = 0
    
    if (0 s>= *(arg1 + 0x6d4))
        esi = 0

struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x6ec)
void* ecx = arg1 + 0x6ec

if (result == *(ecx + 4) || *(arg1 + 0x6e0) != esi)
    *(arg1 + 0x6e0) = esi
    HWND hWnd_1 = *(arg1 + 0xbc)
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0x1009, 0, 0)
        ecx = arg1 + 0x6ec
    
    *(ecx + 4) = *ecx
    int32_t ecx_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD** result_3 = *(arg1 + 0x6f8)
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_3
    int32_t edx_1 = *(arg1 + 0x704)
    result_1 = result_2
    int32_t var_90_1 = 0
    
    if (edx_1 != 0)
        sub_67bd10(&result_1, edx_1)
        ecx_1 = var_90_1
        result_2 = result_1
    
    sub_67b820(arg1 + 0x6f8, &result_1, result_3, 0, result_2, ecx_1)
    int32_t eax_7 = *(arg1 + 0x6d8)
    int32_t edx_3 = eax_7 * esi
    *(arg1 + 0x6e4) = edx_3
    int32_t ecx_4 = edx_3 + eax_7
    void* eax_8 = data_bac510
    *(arg1 + 0x6e8) = ecx_4
    int32_t eax_9 = *(eax_8 + 0x10b88)
    
    if (ecx_4 s> eax_9)
        *(arg1 + 0x6e8) = eax_9
    
    void* edi_1 = arg1 + 0x6ec
    int32_t var_a8_4 = sub_67b5c0(edi_1, *(arg1 + 0x6e8) - edx_3)
    sub_67b6c0(arg1 + 0x6f8, *(arg1 + 0x6e8) - *(arg1 + 0x6e4))
    data_bac504
    *(arg1 + 0x708) = sub_6a53f0()
    result = nullptr
    int32_t var_20_1 = 7
    int32_t var_24_1 = 0
    int16_t var_34 = 0
    int32_t var_c_1 = 0
    int32_t i = *(arg1 + 0x6e4)
    WPARAM var_8c_1 = 0
    
    if (i s< *(arg1 + 0x6e8))
        result_1 = nullptr
        
        do
            void* edi_2 = *edi_1
            void* edi_3 = edi_2 + result
            
            if (edi_2 == neg.d(result))
                result.b = 0
            else
                _memset(edi_3, 0, 0x122c)
                
                if (i s< 0)
                    result.b = 0
                else
                    result = data_bac510
                    
                    if (result[0x42e4] + result[0x42e3] + result[0x42e2] s<= i)
                        result.b = 0
                    else
                        result.b = sub_6a50c0(data_bac504 + 0x4b068, i, edi_3).b != 0
            
            void* var_4c
            int32_t var_38
            WPARAM edi_4
            
            if (result.b == 0)
                int16_t* eax_20 = sub_67add0(arg1, &var_4c, i, nullptr)
                var_c_1.b = 2
                
                if (&var_34 != eax_20)
                    sub_52e3c0(&var_34, eax_20, 0, 0xffffffff)
                
                var_c_1.b = 0
                
                if (var_38 u>= 8)
                    j__free(var_4c)
                
                edi_4 = var_8c_1
                int32_t* edx_5 = *(arg1 + 0x6f8) + (edi_4 u>> 5 << 2)
                *edx_5 &= not.d(1 << (edi_4.b & 0x1f))
            else
                int16_t* eax_16 = sub_67add0(arg1, &var_4c, i, edi_3)
                var_c_1.b = 1
                
                if (&var_34 != eax_16)
                    sub_52e3c0(&var_34, eax_16, 0, 0xffffffff)
                
                var_c_1.b = 0
                
                if (var_38 u>= 8)
                    j__free(var_4c)
                
                edi_4 = var_8c_1
                int32_t* edx_4 = *(arg1 + 0x6f8) + (edi_4 u>> 5 << 2)
                *edx_4 |= 1 << (edi_4.b & 0x1f)
            
            var_38 = 7
            int32_t var_3c_1 = 0
            var_4c.w = 0
            sub_52e720(&var_4c, &data_ad7c90, nullptr)
            var_c_1.b = 3
            LRESULT hWnd_2 = *(arg1 + 0xbc)
            
            if (hWnd_2 != 0)
                hWnd_2 = SendMessageW(hWnd_2, 0x1004, 0, 0)
            
            LRESULT hWnd_4 = hWnd_2
            WPARAM hWnd_3 = *(arg1 + 0xbc)
            int32_t lParam = 0
            int32_t var_80_1 = 0
            
            if (hWnd_3 != 0)
                hWnd_3 = SendMessageW(hWnd_3, 0x104d, 0, &lParam)
            
            sub_6c4d60(arg1 + 0xb8, hWnd_3, 0, &var_4c)
            var_c_1.b = 0
            
            if (var_38 u>= 8)
                j__free(var_4c)
            
            if (i == *(arg1 + 0x708))
                var_38 = 7
                int32_t var_3c_2 = 0
                var_4c.w = 0
                sub_52e720(&var_4c, 0xaf97bc, 3)
                var_c_1.b = 4
                sub_6c4d60(arg1 + 0xb8, edi_4, 0, &var_4c)
                var_c_1.b = 0
                
                if (var_38 u>= 8)
                    j__free(var_4c)
            
            sub_6c4d60(arg1 + 0xb8, edi_4, 1, &var_34)
            result = &result_1[0x48b]
            var_8c_1 = edi_4 + 1
            i += 1
            result_1 = result
            edi_1 = arg1 + 0x6ec
        while (i s< *(arg1 + 0x6e8))
        
        if (var_20_1 u>= 8)
            result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &result_1)
return result
