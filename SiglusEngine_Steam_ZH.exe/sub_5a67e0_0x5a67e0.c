// 函数: sub_5a67e0
// 地址: 0x5a67e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9b9a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* const result = arg1
void* const result_1 = result
int32_t ebx = 0
int32_t var_7c = 0

if (*(result + 0x444) != 0)
    int32_t var_30_1 = 7
    int16_t* var_34_1 = nullptr
    int16_t var_44 = 0
    int32_t var_8_1 = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    WPARAM i = 0
    var_8_1.b = 1
    char var_75_1 = 0
    
    if (*(result + 0x43c) s> 0)
        void* ecx = result + 0x38c
        int32_t var_80_1 = 0
        char edx_4
        
        do
            void* edi_1 = *(result + 0x444)
            int32_t eax_3 = *(edi_1 + 0x2c)
            int32_t edx_2
            
            if (eax_3 != *(edi_1 + 0x30) && i s>= 0)
                int32_t eax_4
                int32_t edx_1
                edx_1:eax_4 = muls.dp.d(0x38e38e39, *(edi_1 + 0x30) - eax_3)
                edx_2 = edx_1 s>> 4
            
            int32_t edx_3
            int32_t edi_2
            
            if (eax_3 == *(edi_1 + 0x30) || i s< 0 || i s>= (edx_2 u>> 0x1f) + edx_2)
                edi_2 = var_80_1
                edx_3 = 0xffffffff
            else
                edi_2 = var_80_1
                edx_3 = *(edi_2 + *(edi_1 + 0x2c) + 0x28)
            
            int32_t var_74
            int16_t var_5c
            int32_t var_48
            
            if (edx_3 s< 0)
                var_48 = 7
                int32_t var_4c_1 = 0
                var_5c = 0
                sub_52e720(&var_5c, 0xaf17c4, 1)
                ebx |= 2
                int32_t var_8_2 = 3
                int32_t var_7c_2 = ebx
                sub_52e3c0(&var_44, &var_5c, 0, 0xffffffff)
            else
                int16_t* eax_9 = sub_61ffb0(&var_74, edx_3)
                ebx |= 1
                var_8_1.b = 2
                int32_t var_7c_1 = ebx
                
                if (&var_44 != eax_9)
                    sub_52e3c0(&var_44, eax_9, 0, 0xffffffff)
            
            if ((ebx.b & 2) != 0)
                ebx &= 0xfffffffd
                int32_t var_7c_3 = ebx
                
                if (var_48 u>= 8)
                    j__free(var_5c.d)
                
                var_48 = 7
                int32_t var_4c_2 = 0
                var_5c = 0
            
            var_8_1 = 1
            int32_t var_60
            
            if ((ebx.b & 1) != 0)
                ebx &= 0xfffffffe
                int32_t var_7c_4 = ebx
                
                if (var_60 u>= 8)
                    j__free(var_74)
            
            int16_t* eax_10 = sub_6c3b60(ecx, &var_74, i)
            int32_t* ecx_7 = &var_2c
            var_8_1.b = 4
            
            if (&var_2c != eax_10)
                ecx_7 = sub_52e3c0(ecx_7, eax_10, 0, 0xffffffff)
            
            var_8_1.b = 1
            
            if (var_60 u>= 8)
                ecx_7 = j__free(var_74)
            
            int16_t* eax_11 = &var_2c
            int32_t var_a0_5 = var_1c_1
            
            if (var_18_1 u>= 8)
                eax_11 = var_2c.d
            
            if (sub_536340(&var_44, ecx_7, var_34_1, eax_11) == 0)
                edx_4 = var_75_1
            else
                sub_6c3a10(ecx, i, &var_44)
                edx_4 = 1
                var_75_1 = 1
            
            result = result_1
            i += 1
            var_80_1 = edi_2 + 0x48
        while (i s< *(result + 0x43c))
        
        if (edx_4 != 0)
            HWND hWnd = *(result + 4)
            
            if (hWnd != 0)
                InvalidateRect(hWnd, nullptr, 0)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
    
    result = nullptr
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
