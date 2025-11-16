// 函数: sub_5a5c30
// 地址: 0x5a5c30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b9a3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    void* var_68
    
    if (*(arg1 + 0x444) == 0)
        void* const var_44
        int32_t* var_88_1 = &var_44
        int128_t var_60
        sub_6c1cb0(arg1, &var_60, *sub_6c3c70(arg1 + 0x38c))
        int32_t var_88_2 = 0x280
        void* eax_6
        int32_t* ecx_2
        eax_6, ecx_2 = sub_745f3f()
        var_68 = eax_6
        int32_t var_14_1 = 0
        void* const eax_7
        
        if (eax_6 == 0)
            eax_7 = nullptr
        else
            eax_7, ecx_2 = sub_5a7020(eax_6)
        
        var_44 = eax_7
        int32_t* var_40 = nullptr
        int32_t var_14_2 = 1
        int32_t* var_88_3 = &var_40
        sub_5a6a50(eax_7, eax_7, ecx_2)
        int32_t var_14_3 = 2
        void** var_88_4 = &var_44
        sub_54d190(arg1 + 0x444)
        int32_t var_14_4 = 0xffffffff
        int32_t* esi = var_40
        
        if (esi != 0)
            bool cond:0_1 = esi[1] != 1
            esi[1]
            esi[1] -= 1
            
            if (not(cond:0_1))
                (*(*esi + 4))(eax_4)
                bool cond:1_1 = esi[2] != 1
                esi[2]
                esi[2] -= 1
                
                if (not(cond:1_1))
                    (*(*esi + 8))()
        
        sub_5a73b0(*(arg1 + 0x444), *(arg1 + 4), *(arg1 + 0x43c), var_60)
    
    void* ecx_10 = data_bac45c
    *(arg1 + 0x424) = *(ecx_10 + 0x64)
    void* ecx_11 = data_bac4a0
    *(arg1 + 0x428) = *(ecx_10 + 0x68)
    int32_t eax_13
    eax_13.b = *(ecx_11 + 0x1e9)
    *(arg1 + 0x42c) = eax_13.b
    
    if (*(arg1 + 0x438) != eax_13.b)
        uint32_t var_88_5 = zx.d(*(ecx_11 + 0x1e9))
        sub_5a60e0(arg1)
    
    int32_t eax_15 = *(arg1 + 0x1dc)
    int128_t var_94
    char eax_16
    
    if (eax_15 != 0)
        int32_t var_88_6 = 0
        var_94:8.d = 0
        var_94:4.d = 0xf0
        var_94.d = eax_15
        eax_16 = SendMessageW(0xf000000000)
    else
        eax_16 = 0
    
    LRESULT eax_17
    
    if ((eax_16 & 1) == 0)
        eax_17 = *(arg1 + 0xbc)
        
        if (eax_17 != 0)
            int32_t var_88_7 = 0
            var_94:8.d = 0
            var_94:4.d = 0xf0
            var_94.d = eax_17
            eax_17 = SendMessageW(0xf000000000)
    
    if ((eax_16 & 1) != 0 || (eax_17.b & 1) != 0)
        int32_t ecx_13 = *(arg1 + 0x424)
        
        if (*(arg1 + 0x430) != ecx_13 || *(arg1 + 0x434) != *(arg1 + 0x428))
            int32_t var_88_8 = *(arg1 + 0x428)
            var_94:8.d = ecx_13
            sub_5a62b0(arg1)
            sub_5a67e0(arg1)
    
    if (*(data_bac4a0 + 0x1e9) != 0)
        LRESULT eax_20 = *(arg1 + 0x14c)
        char var_69_1 = 0
        
        if (eax_20 != 0)
            int32_t var_88_9 = 0
            var_94:8.d = 0
            var_94:4.d = 0xf0
            var_94.d = eax_20
            eax_20 = SendMessageW(0xf000000000)
        
        if ((eax_20.b & 1) != 0)
            if (*(arg1 + 0x440) != 0)
                int32_t var_88_10 = 1
                
                if (((GetKeyState() u>> 0xf).b & 1) == 0 && GetFocus() == *(data_bac454 + 4))
                    int32_t* eax_25 = sub_6b1d50(&var_68)
                    int32_t var_88_11 = eax_25[1]
                    var_94:8.d = *eax_25
                    void var_34
                    var_94:4.d = &var_34
                    
                    if (sub_5a6b80(sub_6c12d0(data_bac454)) != 0)
                        var_69_1 = 1
                        *(data_bac4a0 + 0x1ea) = 1
            
            int32_t var_88_12 = 1
            *(arg1 + 0x440) = (GetKeyState() u>> 0xf).b & 1
        
        if ((eax_20.b & 1) == 0 || var_69_1 == 0)
            if (*(arg1 + 0x441) != 0)
                int32_t var_88_13 = 0x31
                
                if (((GetKeyState() u>> 0xf).b & 1) == 0)
                    if (GetFocus() == *(data_bac454 + 4))
                        *(data_bac4a0 + 0x1ea) = 1
                    else if (GetFocus() == *(arg1 + 4))
                        *(data_bac4a0 + 0x1ea) = 1
                    else
                        void* esi_3 = *(arg1 + 0x444)
                        
                        if (esi_3 != 0)
                            HWND eax_36
                            eax_36.b = GetFocus() == *(esi_3 + 0x64)
                            
                            if (eax_36.b != 0)
                                *(data_bac4a0 + 0x1ea) = 1
            
            int32_t var_88_14 = 0x31
            *(arg1 + 0x441) = (GetKeyState() u>> 0xf).b & 1
    
    result = *(arg1 + 0x42c)
    *(arg1 + 0x430) = *(arg1 + 0x424)
    *(arg1 + 0x438) = result

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_78)
return result
