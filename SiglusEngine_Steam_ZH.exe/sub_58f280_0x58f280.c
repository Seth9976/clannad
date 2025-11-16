// 函数: sub_58f280
// 地址: 0x58f280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b7bee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_128
int32_t eax_2 = __security_cookie ^ &var_128
int32_t __saved_edi
int32_t var_134 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) != 0)
    void* ecx = data_bac468
    void* var_138_1 = ecx
    int32_t eax_5 = *(ecx + 0x184)
    int32_t esi_1 = *(ecx + 0x188)
    int32_t* ecx_1 = *(ecx + 0x178)
    int32_t var_dc_1 = esi_1
    int32_t wParam
    int32_t var_d0_1
    int32_t eax_13
    int32_t ecx_8
    int32_t lParam
    uint32_t var_118_1
    int32_t var_110_1
    
    if (*(arg1 + 0x5c0) == 0)
        int32_t eax_14 = sub_608080(ecx_1)
        void* ecx_9 = data_bac468
        void* var_138_4 = ecx_9
        uint32_t eax_15 = sub_6df230(*(ecx_9 + 0x178))
        int32_t eax_16 = sub_601180(data_bac468 + 0xd8)
        void* ecx_13 = data_bac468
        int32_t eax_17
        int32_t edx_5
        edx_5:eax_17 = sx.q(eax_16)
        int32_t lParam_3 = (eax_17 + (edx_5 & 0x3ff)) s>> 0xa
        void* var_138_5 = ecx_13
        ecx_8 = eax_5
        int32_t eax_20
        int32_t edx_7
        edx_7:eax_20 = sx.q(sub_6df1d0(*(ecx_13 + 0x178)))
        eax_13 = (eax_20 + (edx_7 & 0x3ff)) s>> 0xa
        wParam = eax_13
        
        if (ecx_8 == *(arg1 + 0x5a8) && esi_1 == *(arg1 + 0x5ac))
            lParam = *(arg1 + 0x5b0)
        
        if (ecx_8 != *(arg1 + 0x5a8) || esi_1 != *(arg1 + 0x5ac) || lParam s<= 0 || lParam_3 != 0)
            lParam = lParam_3
            var_d0_1 = eax_14
            uint32_t var_cc_3 = eax_15
        else
            uint32_t eax_22 = *(arg1 + 0x5b8)
            var_110_1 = eax_22
            var_d0_1 = eax_22
            var_118_1 = eax_22
            uint32_t var_cc_2 = eax_22
            eax_13 = lParam
            wParam = eax_13
        
        int32_t lParam_2 = lParam
    else
        int32_t eax_6 = sub_608080(ecx_1)
        void* ecx_2 = data_bac468
        void* var_138_2 = ecx_2
        var_110_1 = eax_6
        var_d0_1 = eax_6
        uint32_t eax_7 = sub_6df230(*(ecx_2 + 0x178))
        var_118_1 = eax_7
        uint32_t var_cc_1 = eax_7
        int32_t eax_8 = sub_601180(data_bac468 + 0xd8)
        void* ecx_6 = data_bac468
        int32_t eax_9
        int32_t edx_1
        edx_1:eax_9 = sx.q(eax_8)
        void* var_138_3 = ecx_6
        lParam = ((edx_1 & 0x3ff) + eax_9) s>> 0xa
        int32_t lParam_1 = lParam
        ecx_8 = eax_5
        int32_t eax_11
        int32_t edx_3
        edx_3:eax_11 = sx.q(sub_6df1d0(*(ecx_6 + 0x178)))
        eax_13 = (eax_11 + (edx_3 & 0x3ff)) s>> 0xa
        wParam = eax_13
    int32_t var_d4_1 = eax_13
    
    if (*(arg1 + 0x5c0) != 0 || ecx_8 != *(arg1 + 0x5a8) || esi_1 != *(arg1 + 0x5ac))
        if (ecx_8 s< 0)
            HWND hWnd = *(arg1 + 0xbc)
            
            if (hWnd != 0)
                SendMessageW(hWnd, 0xc, 0, &data_ad7c90)
        else
            int32_t var_6c
            int16_t* eax_24
            int16_t* var_154
            
            if (esi_1 s< 0)
                int32_t var_138_7 = ecx_8
                var_154 = u"KOE(%08d)"
                void var_150
                sub_52e820(&var_150, var_154)
                var_154 = &var_6c
                eax_24 = sub_6ae4c0(var_154, var_150)
                int32_t var_14_2 = 1
            else
                int32_t var_138_6 = esi_1
                int32_t var_13c_1 = ecx_8
                sub_52e820(&var_154, u"KOE(%08d,%03d)")
                eax_24 = sub_6ae4c0(&var_6c, var_154)
                int32_t var_14_1 = 0
            sub_6c2db0(arg1 + 0xb8, eax_24)
            int32_t var_14_3 = 0xffffffff
            int32_t var_58
            
            if (var_58 u>= 8)
                j__free(var_6c)
            
            sub_58f780(arg1)
    
    if (*(arg1 + 0x5c0) == 0 && lParam == *(arg1 + 0x5b0))
        result = wParam
    
    if (*(arg1 + 0x5c0) != 0 || lParam != *(arg1 + 0x5b0) || result != *(arg1 + 0x5b4))
        HWND hWnd_3 = *(arg1 + 0x26c)
        
        if (hWnd_3 != 0)
            SendMessageW(hWnd_3, 0x406, 0, lParam + 1)
        
        HWND hWnd_4 = *(arg1 + 0x26c)
        
        if (hWnd_4 != 0)
            hWnd_4 = SendMessageW(hWnd_4, 0x402, wParam + 1, 0)
        
        HWND hWnd_1 = *(arg1 + 0x26c)
        
        if (hWnd_1 != 0)
            hWnd_4 = SendMessageW(hWnd_1, 0x402, wParam, 0)
        
        HWND hWnd_2 = *(arg1 + 0x26c)
        
        if (hWnd_2 != 0)
            hWnd_4 = SendMessageW(hWnd_2, 0x406, 0, lParam)
        
        HWND hWnd_5 = hWnd_4
        int32_t var_3c
        int16_t* eax_28 = sub_6ad9b0(&var_3c)
        int32_t var_14_4 = 2
        int16_t var_9c
        int16_t* eax_29 = sub_6ad9b0(&var_9c)
        var_14_4.b = 3
        int16_t var_b4
        int16_t* eax_30 = sub_532b80(eax_29, eax_29, &var_b4, &data_aefc08)
        var_14_4.b = 4
        int16_t var_84
        int16_t* eax_31 = sub_5327a0(eax_30, eax_30, &var_84, eax_28)
        var_14_4.b = 5
        var_14_4.b = 6
        int16_t var_54
        sub_6c2db0(arg1 + 0x1d8, sub_532b80(eax_31, eax_31, &var_54, &data_aefb98))
        int32_t var_40
        
        if (var_40 u>= 8)
            j__free(var_54.d)
        
        int32_t var_40_1 = 7
        int32_t var_44_1 = 0
        var_54 = 0
        int32_t var_70
        
        if (var_70 u>= 8)
            j__free(var_84.d)
        
        int32_t var_70_1 = 7
        int32_t var_74_1 = 0
        var_84 = 0
        int32_t var_a0
        
        if (var_a0 u>= 8)
            j__free(var_b4.d)
        
        int32_t var_a0_1 = 7
        int32_t var_a4_1 = 0
        var_b4 = 0
        int32_t var_88
        
        if (var_88 u>= 8)
            j__free(var_9c.d)
        
        result = nullptr
        int32_t var_88_1 = 7
        int32_t var_8c_1 = 0
        var_9c = 0
        int32_t var_28
        
        if (var_28 u>= 8)
            result = j__free(var_3c)
    
    *(arg1 + 0x5c0) = 0
    *(arg1 + 0x5a8) = eax_5.o
    *(arg1 + 0x5b8) = var_d0_1.q

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_128)
return result
