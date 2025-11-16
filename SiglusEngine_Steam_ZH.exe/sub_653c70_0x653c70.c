// 函数: sub_653c70
// 地址: 0x653c70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c433e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_98 = zx.o(0)
int32_t var_8_1 = 0
int32_t* lpFileName_1
sub_652060(&lpFileName_1)
var_8_1.b = 1
int32_t* lpFileName = &lpFileName_1
int32_t var_30

if (var_30 u>= 8)
    lpFileName = lpFileName_1

uint32_t eax_3 = GetFileAttributesW(lpFileName)
char var_85
void* ebx_1

if (eax_3 == 0xffffffff || (eax_3.b & 0x10) != 0)
    ebx_1 = var_98.d
    var_85 = 1
else
    int32_t* var_ac = nullptr
    int64_t var_a4_1 = 0
    var_8_1.b = 2
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, &data_af335c, 2)
    var_8_1.b = 3
    struct _EXCEPTION_REGISTRATION_RECORD** eax_4 = sub_6b7a80(&var_ac, &lpFileName_1, &var_2c)
    var_8_1.b = 2
    int32_t ebx
    ebx.b = eax_4.b == 0
    
    if (var_18_1 u>= 8)
        eax_4 = j__free(var_2c.d)
    
    if (ebx.b == 0)
        char var_6c
        sub_6b74a0(eax_4, 0x10, &var_6c, var_ac)
        uint32_t var_64
        sub_5979b0(&var_98, var_64)
        char* ecx_8 = var_98.d
        
        if (ecx_8 == var_98:4.d)
            ecx_8 = nullptr
        
        sub_6b74a0(0, var_64, ecx_8, var_ac)
        sub_6524b0(&var_98)
        var_98:0xc.d = 0
        int32_t var_9c_1 = 0
        int32_t var_60
        
        if (var_60 s<= 0)
            ebx_1 = var_98.d
        else
            int32_t esi_5
            
            do
                int32_t var_48_1 = 7
                int32_t var_4c_1 = 0
                int16_t var_5c = 0
                var_8_1.b = 6
                int16_t* eax_7 = sub_5b0600(&var_98, &var_2c)
                var_8_1.b = 7
                
                if (&var_5c != eax_7)
                    sub_52e3c0(&var_5c, eax_7, 0, 0xffffffff)
                
                var_8_1.b = 6
                
                if (var_18_1 u>= 8)
                    j__free(var_2c.d)
                
                void* esi_1 = var_98:0xc.d
                ebx_1 = var_98.d
                var_2c = 0
                void* eax_8 = ebx_1
                var_18_1 = 7
                
                if (ebx_1 == var_98:4.d)
                    eax_8 = nullptr
                
                int32_t var_1c_3 = 0
                var_98:0xc.d = esi_1 + 4
                void* edi_1 = *(esi_1 + 4 + eax_8 - 4)
                int32_t eax_9 = sub_6980b0(data_bac45c, &var_5c)
                
                if (eax_9 s< 0 || edi_1 != *(*(*(data_bac45c + 0x54) + eax_9 * 0x54 + 4) + 0x80))
                    var_98:0xc.d = esi_1 + 4 + edi_1
                else
                    int32_t ecx_16 = eax_9 * 3
                    int32_t eax_11 = *data_bac48c
                    int32_t* edx_3 = *(eax_11 + (ecx_16 << 2))
                    
                    if (edx_3 == *(eax_11 + (ecx_16 << 2) + 4))
                        edx_3 = nullptr
                    
                    if (edi_1 s> 0)
                        void* const eax_12 = ebx_1
                        
                        if (ebx_1 == var_98:4.d)
                            eax_12 = nullptr
                        
                        sub_748840(edx_3, eax_12 + esi_1 + 4, edi_1, eax_2)
                        var_98:0xc.d = esi_1 + 4 + edi_1
                
                var_8_1.b = 2
                
                if (var_48_1 u>= 8)
                    j__free(var_5c.d)
                
                esi_5 = var_9c_1 + 1
                var_9c_1 = esi_5
            while (esi_5 s< var_60)
        
        int32_t var_18_3 = 7
        int32_t var_1c_4 = 0
        var_2c = 0
        sub_52e720(&var_2c, 0xaf7ad8, 0xe)
        var_8_1.b = 8
        sub_684160(data_bac424, 5, &var_2c)
        
        if (var_18_3 u>= 8)
            j__free(var_2c.d)
        
        var_85 = 1
    else
        int32_t var_84
        int16_t* eax_5 = sub_6b9ed0(&var_84)
        var_8_1.b = 4
        int16_t* eax_6 = sub_548cb0(eax_5, 0xaf7ab4, &var_2c, eax_5)
        var_8_1.b = 5
        sub_684160(data_bac424, 2, eax_6)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_70
        
        if (var_70 u>= 8)
            j__free(var_84)
        
        ebx_1 = var_98.d
        var_85 = 0
    
    var_8_1.b = 1
    
    if (sub_6b73d0(var_ac) != 0)
        var_ac = nullptr
        int64_t var_a4_2 = 0

if (var_30 u>= 8)
    j__free(lpFileName_1)

int32_t var_30_1 = 7
int32_t var_34 = 0
lpFileName_1.w = 0

if (ebx_1 != 0)
    j__free(ebx_1)

int32_t result
result.b = var_85
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
