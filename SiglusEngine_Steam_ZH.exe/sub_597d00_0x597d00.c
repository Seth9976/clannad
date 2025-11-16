// 函数: sub_597d00
// 地址: 0x597d00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b869b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    bool cond:0_1 = *(arg1 + 0xb8) != 0
    result = data_bac494
    int32_t edi_1 = result[2]
    int32_t ebx_1 = result[3]
    var_a4 = ebx_1
    
    if (cond:0_1 || *result != 0 || edi_1 != *(arg1 + 0x414) || ebx_1 != *(arg1 + 0x418))
        HWND hWnd = *(arg1 + 0xe4)
        LRESULT eax_5
        
        if (hWnd != 0)
            eax_5 = SendMessageW(hWnd, 0x1004, 0, 0)
        else
            eax_5 = 0
        
        if (eax_5 != ebx_1)
            int32_t eax_7 = *(data_bac4e0 + 0x30)
            
            if (eax_7 != 0)
                eax_7(*(arg1 + 0xe4), ebx_1, eax_4)
        else if (edi_1 != *(arg1 + 0x414))
            HWND hWnd_1 = *(arg1 + 0xe4)
            
            if (hWnd_1 != 0)
                SendMessageW(hWnd_1, 0x1008, 0, 0)
            
            int32_t eax_9 = *(data_bac4e0 + 0x14)
            
            if (eax_9 != 0)
                eax_9(*(arg1 + 0xe4), eax_4)
        
        if (ebx_1 s> 0)
            int32_t ebx_2 = 0
            
            if (var_a4 s> 0)
                int32_t edi_2 = edi_1
                int32_t eax_37
                
                do
                    void* eax_10 = edi_2 * 0xbc
                    void* ecx = eax_10
                    uint32_t eax_13 = zx.d(*(*(data_bac494 + 0x10) + ecx))
                    
                    if (eax_13 == 0)
                        int32_t var_68_1 = 7
                        void* var_b8_11 = nullptr
                        void* const var_bc_8 = &data_ad7c90
                        int32_t var_6c_1 = 0
                        int16_t var_7c = 0
                        sub_52e720(&var_7c, var_bc_8, var_b8_11)
                        int32_t var_c_5 = 0
                        int32_t eax_22 = *(data_bac4e0 + 0x34)
                        
                        if (eax_22 != 0)
                            eax_22(*(arg1 + 0xe4), ebx_2, 0, &var_7c, eax_4)
                        
                        int32_t var_c_6 = 0xffffffff
                        
                        if (var_68_1 u>= 8)
                            j__free(var_7c.d)
                        
                        int32_t var_68_2 = 7
                        int32_t var_6c_2 = 0
                        var_7c = 0
                        ecx = eax_10
                    else if (eax_13 == 1)
                        void* var_b8_8 = 1
                        int32_t var_50_1 = 7
                        void* const var_bc_6 = &data_af0550
                        int32_t var_54_1 = 0
                        int16_t var_64 = 0
                        sub_52e720(&var_64, var_bc_6, var_b8_8)
                        int32_t var_c_3 = 1
                        int32_t eax_20 = *(data_bac4e0 + 0x34)
                        
                        if (eax_20 != 0)
                            eax_20(*(arg1 + 0xe4), ebx_2, 0, &var_64, eax_4)
                        
                        int32_t var_c_4 = 0xffffffff
                        
                        if (var_50_1 u>= 8)
                            j__free(var_64.d)
                        
                        int32_t var_50_2 = 7
                        int32_t var_54_2 = 0
                        var_64 = 0
                        ecx = eax_10
                    else if (eax_13 == 2)
                        void* var_b8_5 = 1
                        void* const var_bc_4 = &data_af049c
                        int32_t var_80_1 = 7
                        int32_t var_84_1 = eax_13 - 2
                        int16_t var_94 = (eax_13 - 2).w
                        sub_52e720(&var_94, var_bc_4, var_b8_5)
                        int32_t var_c_1 = 2
                        int32_t eax_18 = *(data_bac4e0 + 0x34)
                        
                        if (eax_18 != 0)
                            eax_18(*(arg1 + 0xe4), ebx_2, 0, &var_94, eax_4)
                        
                        int32_t var_c_2 = 0xffffffff
                        
                        if (var_80_1 u>= 8)
                            j__free(var_94.d)
                        
                        int32_t var_80_2 = 7
                        int32_t var_84_2 = 0
                        var_94 = 0
                        ecx = eax_10
                    
                    void* ecx_4 = ecx + *(data_bac494 + 0x10)
                    uint32_t var_b8_14 = zx.d(*(ecx_4 + 0xe))
                    uint32_t var_bc_10 = zx.d(*(ecx_4 + 0xc))
                    uint32_t var_c0_6 = zx.d(*(ecx_4 + 0xa))
                    uint32_t var_c4_6 = zx.d(*(ecx_4 + 8))
                    uint32_t var_c8_1 = zx.d(*(ecx_4 + 4))
                    uint32_t var_cc_1 = zx.d(*(ecx_4 + 2))
                    int32_t var_d0_1 = 7
                    int32_t var_d4_1 = 0
                    int16_t var_e4 = 0
                    sub_52e720(&var_e4, u"%04d/%02d/%02d (%02d:%02d:%02d)", 0x1f)
                    int32_t var_34
                    sub_6ae4c0(&var_34, var_e4)
                    int32_t var_c_7 = 3
                    void* eax_32 = *(data_bac494 + 0x10)
                    
                    if (*(eax_32 + eax_10 + 0x7c) != 0)
                        void** eax_33 = eax_32 + eax_10 + 0x6c
                        var_c_7.b = 4
                        int16_t var_4c
                        sub_532870(&var_34, sub_548cb0(eax_33, 0xaf0598, &var_4c, eax_33), 0, 
                            0xffffffff)
                        var_c_7.b = 3
                        int32_t var_38
                        
                        if (var_38 u>= 8)
                            j__free(var_4c.d)
                        
                        var_38 = 7
                        int32_t var_3c_1 = 0
                        var_4c = 0
                    
                    int32_t eax_36 = *(data_bac4e0 + 0x34)
                    
                    if (eax_36 != 0)
                        eax_36(*(arg1 + 0xe4), ebx_2, 1, &var_34, eax_4)
                    
                    eax_37 = var_a4
                    edi_2 += 1
                    int32_t var_c_8 = 0xffffffff
                    
                    if (edi_2 s>= eax_37)
                        edi_2 = 0
                    
                    int32_t var_20
                    
                    if (var_20 u>= 8)
                        j__free(var_34)
                        eax_37 = var_a4
                    
                    ebx_2 += 1
                while (ebx_2 s< eax_37)
            
            HWND hWnd_2 = *(arg1 + 0xe4)
            ebx_1 = var_a4
            
            if (hWnd_2 != 0)
                SendMessageW(hWnd_2, 0x1013, ebx_1 - 1, 1)
        
        result = data_bac494
        *result = nullptr
    
    *(arg1 + 0x414) = edi_1
    *(arg1 + 0x418) = ebx_1
    *(arg1 + 0xb8) = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_a4)
return result
