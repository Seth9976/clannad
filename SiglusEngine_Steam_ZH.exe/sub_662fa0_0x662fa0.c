// 函数: sub_662fa0
// 地址: 0x662fa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c536c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t* eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_b0 = ebx
int32_t esi
int32_t var_b4 = esi
int32_t edi
int32_t var_b8 = edi
int32_t* var_bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx_1 = 7
char var_8d = 1
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
int32_t var_8_1 = 0
int32_t* var_a4 = nullptr
struct IUnknown pProxy_1 = 0
int32_t* i_2 = nullptr
int32_t* i_1 = &var_a4
void* const var_c4 = &data_ab2a78
int32_t var_c8 = 1
int32_t var_cc = 0
void* const var_d0 = &data_ab2b48
HRESULT eax_3
int32_t* i_4
eax_3, i_4 = CoCreateInstance(&data_ab2b48, 0, CLSCTX_INPROC_SERVER, &data_ab2a78, i_1)
int32_t result
void* esp_3
int16_t var_2c

if (eax_3 s< 0 || var_a4 == 0)
    i_1 = 0x10
    int32_t var_18_5 = 7
    wchar16 const* const var_c4_14 = u"CoCreateInstance"
    int32_t var_1c_5 = 0
    var_2c = 0
    sub_52e720(&var_2c, u"CoCreateInstance", i_1)
    var_8_1.b = 1
    i_1 = &var_2c
    sub_6b9c90(&var_2c, eax_3, 3, i_1)
    esp_3 = &var_bc
    
    if (var_18_5 u>= 8)
        i_1 = var_2c.d
        j__free(i_1)
        esp_3 = &var_bc
    
    result.b = 0
else
    i_1 = i_4
    var_8_1.b = 2
    int32_t* var_98
    int32_t* eax_5 = *sub_662bd0(&var_98)
    int32_t edx
    
    if (eax_5 == 0)
        edx = 0
    else
        edx = *eax_5
    
    int32_t* eax_6 = var_a4
    i_1 = &pProxy_1
    int32_t ecx_1 = *eax_6
    int32_t var_d8_1
    __builtin_memset(&var_d8_1, 0, 0x18)
    int32_t eax_7 = (*(ecx_1 + 0xc))(eax_6, edx, 0, 0, 0, 0, 0, 0, i_1)
    var_8_1.b = 0
    int32_t* esi_2 = var_98
    
    if (esi_2 != 0)
        i_1 = &esi_2[2]
        int32_t eax_9
        int32_t* i_5
        eax_9, i_5 = InterlockedDecrement(i_1)
        
        if (eax_9 == 0 && esi_2 != 0)
            i_1 = i_5
            sub_662d80(esi_2)
    
    struct IUnknown pProxy
    
    if (eax_7 s>= 0)
        pProxy = pProxy_1
    
    int32_t** esp_1
    int16_t* edi_2
    
    if (eax_7 s< 0 || pProxy == 0)
        i_1 = 0x1b
        int32_t var_18_4 = 7
        wchar16 const* const var_c4_13 = u"IWbemLocator::ConnectServer"
        int32_t var_1c_4 = 0
        var_2c = 0
        sub_52e720(&var_2c, u"IWbemLocator::ConnectServer", i_1)
        var_8_1.b = 3
        i_1 = &var_2c
        sub_6b9c90(&var_2c, eax_7, 4, i_1)
        esp_1 = &var_bc
        var_8_1.b = 0
        
        if (var_18_4 u>= 8)
            i_1 = var_2c.d
            j__free(i_1)
            esp_1 = &var_bc
        
        edi_2 = var_44.d
        var_8d = 0
    else
        i_1 = nullptr
        int32_t var_c4_1 = 0
        int32_t var_c8_1 = 3
        int32_t var_cc_1 = 3
        int32_t var_d0_1 = 0
        int32_t var_d4_1 = 0
        int32_t var_d8_2 = 0xa
        HRESULT eax_10 = CoSetProxyBlanket(pProxy, 0xa, 0, nullptr, RPC_C_AUTHN_LEVEL_CALL, 
            RPC_C_IMP_LEVEL_IMPERSONATE, nullptr, i_1)
        int16_t* ecx_4
        
        if (eax_10 s>= 0)
            i_1 = "SELECT * FROM Win32_OperatingSystem"
            int32_t* i_6
            void** eax_12 = sub_662b40(&i_6, i_1)
            i_1 = &data_af89a4
            var_8_1.b = 5
            void** eax_13 = sub_662b40(&var_98, i_1)
            var_8_1.b = 6
            int32_t* ecx_7 = *eax_12
            int32_t esi_5
            
            if (ecx_7 == 0)
                esi_5 = 0
            else
                esi_5 = *ecx_7
            
            int32_t* eax_14 = *eax_13
            int32_t edx_2
            
            if (eax_14 == 0)
                edx_2 = 0
            else
                edx_2 = *eax_14
            
            struct IUnknown pProxy_2 = pProxy_1
            i_1 = &i_2
            int32_t var_c4_3 = 0
            int32_t var_c8_2 = 0x30
            int32_t eax_15 = (*(*pProxy_2 + 0x50))(pProxy_2, edx_2, esi_5, 0x30, 0, i_1)
            sub_662c70(&var_98)
            var_8_1.b = 0
            sub_662c70(&i_6)
            int32_t* i
            
            if (eax_15 s>= 0)
                i = i_2
            
            int16_t var_5c
            
            if (eax_15 s< 0 || i == 0)
                i_1 = 0x18
                int32_t var_48_2 = 7
                wchar16 const* const var_c4_12 = u"IWbemServices::ExecQuery"
                int32_t var_4c_2 = 0
                var_5c = 0
                sub_52e720(&var_5c, u"IWbemServices::ExecQuery", i_1)
                var_8_1.b = 7
                i_1 = &var_5c
                sub_6b9c90(&var_5c, eax_15, 4, i_1)
                ecx_4 = &var_5c
                goto label_663451
            
            do
                i_6 = nullptr
                i_1 = &var_98
                var_98 = nullptr
                int32_t var_c8_3 = 1
                int32_t var_cc_3 = 0xffffffff
                (*(*i + 0x10))(i, 0xffffffff, 1, &i_6, i_1)
                
                if (var_98 == 0)
                    i = i_2
                    break
                
                i_1 = 7
                int32_t var_18_2 = 7
                wchar16 const* const var_c4_5 = u"Caption"
                int32_t var_1c_2 = 0
                var_2c = 0
                sub_52e720(&var_2c, u"Caption", i_1)
                var_8_1.b = 8
                int32_t* i_7 = i_6
                i_1 = &var_2c
                void** eax_17 = sub_662e70(&var_5c, i_7)
                i_1 = 0xffffffff
                int32_t var_c4_6 = 0
                var_8_1.b = 9
                sub_532870(&var_44, eax_17, 0, i_1)
                sub_52e8a0(&var_5c)
                var_8_1.b = 0
                sub_52e8a0(&var_2c)
                i_1 = 0xa
                int32_t var_18_3 = 7
                wchar16 const* const var_c4_7 = u"CSDVersion"
                int32_t var_1c_3 = 0
                var_2c = 0
                sub_52e720(&var_2c, u"CSDVersion", i_1)
                var_8_1.b = 0xa
                int32_t* i_8 = i_6
                i_1 = &var_2c
                void var_74
                sub_662e70(&var_74, i_8)
                var_8_1.b = 0xc
                sub_52e8a0(&var_2c)
                int32_t var_64
                
                if (var_64 != 0)
                    i_1 = &var_74
                    void** eax_19 = sub_548cb0(&var_74, 0xaf4300, &var_5c, i_1)
                    i_1 = 0xffffffff
                    int32_t var_c4_8 = 0
                    var_8_1.b = 0xd
                    sub_532870(&var_44, eax_19, 0, i_1)
                    var_8_1.b = 0xc
                    sub_52e8a0(&var_5c)
                
                i_1 = 0xe
                int32_t var_48_1 = 7
                wchar16 const* const var_c4_9 = u"OSArchitecture"
                int32_t var_4c_1 = 0
                var_5c = 0
                sub_52e720(&var_5c, u"OSArchitecture", i_1)
                var_8_1.b = 0xe
                int32_t* i_9 = i_6
                i_1 = &var_5c
                void var_8c
                sub_662e70(&var_8c, i_9)
                var_8_1.b = 0x10
                sub_52e8a0(&var_5c)
                int32_t var_7c
                
                if (var_7c != 0)
                    i_1 = &var_8c
                    void** eax_21 = sub_548cb0(&var_8c, 0xaf4300, &var_2c, i_1)
                    i_1 = 0xffffffff
                    int32_t var_c4_10 = 0
                    var_8_1.b = 0x11
                    sub_532870(&var_44, eax_21, 0, i_1)
                    var_8_1.b = 0x10
                    sub_52e8a0(&var_2c)
                
                int32_t* i_3 = i_6
                i_1 = i_3
                (*(*i_3 + 8))(i_1)
                sub_52e8a0(&var_8c)
                var_8_1.b = 0
                sub_52e8a0(&var_74)
                i = i_2
            while (i != 0)
            
            ebx_1 = var_30
            int32_t esi_7 = 0
            edi_2 = var_44.d
            
            if (var_34 s> 0)
                do
                    int16_t* eax_22 = &var_44
                    
                    if (ebx_1 u>= 8)
                        eax_22 = edi_2
                    
                    if (eax_22[esi_7] != 0x2122)
                        int16_t* eax_23 = &var_44
                        
                        if (ebx_1 u>= 8)
                            eax_23 = edi_2
                        
                        if (eax_23[esi_7] != 0xae)
                            int16_t* eax_24 = &var_44
                            
                            if (ebx_1 u>= 8)
                                eax_24 = edi_2
                            
                            i_1 = zx.d(eax_24[esi_7])
                            int32_t var_c4_11 = 1
                            sub_55d330(arg1, 1, i_1.w)
                        else
                            i_1 = &data_af8a30
                            sub_5329d0(arg1, i_1)
                    else
                        i_1 = u"(TM)"
                        sub_5329d0(arg1, i_1)
                    
                    esi_7 += 1
                while (esi_7 s< var_34)
                
                i = i_2
            
            int32_t eax_26 = *i
            i_1 = i
            (*(eax_26 + 8))(i_1)
            struct IUnknown eax_27 = pProxy_1
            i_1 = eax_27
            (*(*eax_27 + 8))(i_1)
            esp_1 = &var_bc
        else
            i_1 = 0x11
            int32_t var_18_1 = 7
            wchar16 const* const var_c4_2 = u"CoSetProxyBlanket"
            int32_t var_1c_1 = 0
            var_2c = 0
            sub_52e720(&var_2c, u"CoSetProxyBlanket", i_1)
            var_8_1.b = 4
            i_1 = &var_2c
            sub_6b9c90(&var_2c, eax_10, 3, i_1)
            ecx_4 = &var_2c
        label_663451:
            var_8_1.b = 0
            sub_52e8a0(ecx_4)
            struct IUnknown eax_29 = pProxy_1
            edi_2 = var_44.d
            i_1 = eax_29
            esp_1 = &i_1
            var_8d = 0
            (*(*eax_29 + 8))(i_1)
    
    int32_t* ecx_37 = var_a4
    *(esp_1 - 4) = ecx_37
    (*(*ecx_37 + 8))()
    esp_3 = esp_1
    
    if (ebx_1 u>= 8)
        *(esp_3 - 4) = edi_2
        j__free()
    
    result.b = var_8d
fsbase->NtTib.ExceptionList = ExceptionList
*(esp_3 + 4)
*(esp_3 + 8)
*(esp_3 + 0xc)
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
