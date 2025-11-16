// 函数: sub_60d6b0
// 地址: 0x60d6b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be870
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t pbData_1 = arg3
uint32_t pdwDataLen = 0x20
sub_748840(arg4, arg2, 0x20, eax_2)
uint32_t hProv_1 = 0
int32_t ebx
ebx.b = 0
int16_t var_30

if (CryptAcquireContextW(&hProv_1, u"visualarts_siglus_debug_dll_container", nullptr, 1, 0) == 0)
    int32_t var_1c_1
    
    if (GetLastError() == 0x80090016)
        BOOL eax_6 =
            CryptAcquireContextW(&hProv_1, visualarts_siglus_debug_dll_container", nullptr, 1, 8)
        
        if (eax_6 == 0)
            var_1c_1 = 7
            BOOL var_20_2 = eax_6
            var_30 = eax_6.w
            sub_52e720(&var_30, u"CryptAcquireContext", 0x13)
            int32_t var_8_2 = 1
            goto label_60d797
    else
        var_1c_1 = 7
        int32_t var_20_1 = 0
        var_30 = 0
        sub_52e720(&var_30, u"CryptAcquireContext", 0x13)
        int32_t var_8_1 = 0
    label_60d797:
        enum WIN32_ERROR eax_7 = GetLastError()
        sub_6b9c90(eax_7, eax_7, 2, &var_30)
        int32_t var_8_3 = 0xffffffff
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)

uint32_t hProv = hProv_1

if (hProv != 0)
    uint32_t var_54 = 0
    BOOL eax_8 = CryptCreateHash(hProv, 0x8004, 0, 0, &var_54)
    
    if (eax_8 != 0)
        uint8_t* pbData = pbData_1
        char* pbData_2 = pbData
        
        do
            eax_8.b = *pbData_2
            pbData_2 = &pbData_2[1]
        while (eax_8.b != 0)
        
        BOOL eax_10 = CryptHashData(var_54, pbData, pbData_2 - &pbData_2[1], 0)
        
        if (eax_10 != 0)
            pbData_1 = 0
            BOOL eax_12 = CryptDeriveKey(hProv_1, 0x6602, var_54, 0, &pbData_1)
            
            if (eax_12 != 0)
                BOOL eax_14 = CryptEncrypt(pbData_1, 0, 1, 0, arg4, &pdwDataLen, 0x40)
                
                if (eax_14 != 0)
                    ebx.b = 1
                else
                    int32_t var_34_1 = 7
                    BOOL var_38_1 = eax_14
                    int16_t var_48 = eax_14.w
                    sub_52e720(&var_48, u"CryptEncrypt", 0xc)
                    int32_t var_8_7 = 5
                    sub_6b9eb0(&var_48)
                    sub_52e8a0(&var_48)
                
                CryptDestroyKey(pbData_1)
            else
                int32_t var_1c_4 = 7
                BOOL var_20_5 = eax_12
                var_30 = eax_12.w
                sub_52e720(&var_30, u"CryptDeriveKey", 0xe)
                int32_t var_8_6 = 4
                enum WIN32_ERROR eax_13 = GetLastError()
                sub_6b9c90(eax_13, eax_13, 2, &var_30)
                sub_52e8a0(&var_30)
        else
            int32_t var_1c_3 = 7
            BOOL var_20_4 = eax_10
            var_30 = eax_10.w
            sub_52e720(&var_30, u"CryptHashData", 0xd)
            int32_t var_8_5 = 3
            enum WIN32_ERROR eax_11 = GetLastError()
            sub_6b9c90(eax_11, eax_11, 2, &var_30)
            
            if (var_1c_3 u>= 8)
                j__free(var_30.d)
        
        CryptDestroyHash(var_54)
    else
        int32_t var_1c_2 = 7
        BOOL var_20_3 = eax_8
        var_30 = eax_8.w
        sub_52e720(&var_30, u"CryptCreateHash", 0xf)
        int32_t var_8_4 = 2
        enum WIN32_ERROR eax_9 = GetLastError()
        sub_6b9c90(eax_9, eax_9, 2, &var_30)
        
        if (var_1c_2 u>= 8)
            j__free(var_30.d)
    
    CryptReleaseContext(hProv_1, 0)

hProv.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hProv
