// 函数: sub_602790
// 地址: 0x602790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bdabd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_1ac
int32_t eax_2 = __security_cookie ^ &var_1ac
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* const result = arg1
void* const result_1 = result
int32_t ebx = arg2

if (ebx s< arg3)
    void* edi_1 = result + 4
    int32_t var_19c_1 = 0
    void* var_1a4_1 = edi_1
    var_1ac = ebx * 0x250
    
    do
        void* var_1c0_1 = arg1
        int32_t var_b8
        int16_t* eax_6 = sub_6ad9b0(&var_b8)
        int32_t var_c_1 = 0
        int16_t var_100
        int16_t* eax_7 = sub_5483b0(edi_1, &var_100)
        var_c_1.b = 1
        int16_t var_d0
        int16_t* eax_8 = sub_532b80(eax_7, eax_7, &var_d0, &data_ad85e8)
        var_c_1.b = 2
        int16_t var_e8
        int16_t* eax_9 = sub_5327a0(eax_8, eax_8, &var_e8, eax_6)
        var_c_1.b = 3
        int16_t var_118
        int16_t* eax_10 = sub_532b80(eax_9, eax_9, &var_118, &data_af18c0)
        var_c_1.b = 4
        int32_t var_194_1 = ebx
        void var_a0
        __builtin_memcpy(&var_a0, edi_1, 0x80)
        int32_t var_11c_1 = 2
        int32_t var_24
        *(&var_a0 + (var_24 << 2)) = 0xffffffff.q
        var_24 += 2
        void* ebx_2 = *(result_1 + 0xa4) + var_1ac
        __builtin_memcpy(ebx_2, &var_a0, 0x80)
        *(ebx_2 + 0x80) = 0x58d
        
        if (ebx_2 + 0x84 != eax_10)
            sub_52e3c0(ebx_2 + 0x84, eax_10, 0, 0xffffffff)
        
        *(ebx_2 + 0x9c) = 0
        int32_t ebx_3 = *(ebx_2 + 0xf4)
        int32_t var_1a8 = ebx_3
        
        if (ebx_3 != 0)
            WaitForSingleObject(ebx_3, 0xffffffff)
        
        var_c_1.b = 6
        sub_6de780(ebx_2 + 0xf4)
        *(ebx_2 + 0x214) = 0
        int32_t* edi_3 = *(ebx_2 + 0x218)
        *(ebx_2 + 0x218) = 0
        
        if (edi_3 != 0)
            bool cond:0_1 = edi_3[1] != 1
            edi_3[1]
            edi_3[1] -= 1
            
            if (not(cond:0_1))
                (*(*edi_3 + 4))(eax_4)
                bool cond:1_1 = edi_3[2] != 1
                edi_3[2]
                edi_3[2] -= 1
                
                if (not(cond:1_1))
                    (*(*edi_3 + 8))()
        
        var_c_1.b = 4
        
        if (ebx_3 != 0)
            ReleaseSemaphore(ebx_3, 1, nullptr)
        
        HANDLE hObject = *(ebx_2 + 0xf4)
        
        if (hObject != 0)
            CloseHandle(hObject)
            *(ebx_2 + 0xf4) = 0
        
        *(ebx_2 + 0xf4) = CreateSemaphoreW(nullptr, 1, 1, nullptr)
        sub_6de2d0(ebx_2 + 0xf4)
        HANDLE hHandle = data_4ebe314
        var_1a8 = ebx_2 + 0xf4
        WaitForSingleObject(hHandle, 0xffffffff)
        int32_t* eax_18 = data_4ebe300
        int32_t ecx_11 = data_4ebe304
        
        if (eax_18 == ecx_11)
        label_602a07:
            sub_6dfcc0(&var_1a8)
        else
            while (*eax_18 != ebx_2 + 0xf4)
                eax_18 = &eax_18[1]
                
                if (eax_18 == ecx_11)
                    goto label_602a07_1
            
            if (eax_18 == ecx_11)
            label_602a07_1:
                sub_6dfcc0(&var_1a8)
        
        arg1 = ReleaseSemaphore(data_4ebe314, 1, nullptr)
        int32_t var_104
        
        if (var_104 u>= 8)
            arg1 = j__free(var_118.d)
        
        var_104 = 7
        int32_t var_108_1 = 0
        var_118 = 0
        int32_t var_d4
        
        if (var_d4 u>= 8)
            arg1 = j__free(var_e8.d)
        
        var_d4 = 7
        int32_t var_d8_1 = 0
        var_e8 = 0
        int32_t var_bc
        
        if (var_bc u>= 8)
            arg1 = j__free(var_d0.d)
        
        var_bc = 7
        int32_t var_c0_1 = 0
        var_d0 = 0
        int32_t var_ec
        
        if (var_ec u>= 8)
            arg1 = j__free(var_100.d)
        
        result = nullptr
        int32_t var_c_2 = 0xffffffff
        var_ec = 7
        int32_t var_f0_1 = 0
        var_100 = 0
        int32_t var_a4
        
        if (var_a4 u>= 8)
            result, arg1 = j__free(var_b8)
        
        var_1ac += 0x250
        ebx = arg2 + 1
        edi_1 = var_1a4_1
        arg2 = ebx
    while (ebx s< arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_1ac)
return result
