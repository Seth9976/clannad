// 函数: sub_5c9ac0
// 地址: 0x5c9ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb9bc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7d4 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_7c0 = ebx
bool cond:0 = *(ebx + 0xbc) == 0
BSTR bstrString = nullptr

if (not(cond:0))
    void* var_7d8_1 = 3
    int32_t var_260_1 = 7
    void* const var_7dc_1 = &data_af2864
    int32_t var_264_1 = 0
    int16_t var_274 = 0
    sub_52e720(&var_274, var_7dc_1, var_7d8_1)
    int32_t var_8_1 = 0
    PWSTR psz_1
    sub_6109e0(&var_274, data_bac4d8 + 0x18, &psz_1, &var_274, ebx + 0xac, &bstrString)
    var_8_1.b = 2
    
    if (var_260_1 u>= 8)
        j__free(var_274.d)
    
    int32_t var_260_2 = 7
    int32_t var_264_2 = 0
    var_274 = 0
    int32_t var_294
    int32_t var_290
    int32_t var_244
    int16_t var_22c
    
    if (var_294 != 0)
        if (sub_5cb7b0(ebx + 0xac) == 0)
            goto label_5c9d28
        
        void* var_7d8_9 = 0x18
        int32_t var_218_2 = 7
        void* const var_7dc_4 = &data_af2880
        int32_t var_21c_2 = 0
        var_22c = 0
        sub_52e720(&var_22c, var_7dc_4, var_7d8_9)
        var_8_1.b = 5
        sub_684160(data_bac424, 5, &var_22c)
        var_8_1.b = 2
        
        if (var_218_2 u>= 8)
            j__free(var_22c.d)
        
        void* var_7b4
        sub_5ca890(&var_7b4)
        var_8_1.b = 6
        int32_t esi_2 = data_4ebe3ac
        sub_683ad0(0)
        char var_7d8_14 = 1
        ebx.b = (*(var_7b4 + 0xc))(esi_2)
        sub_683ad0(var_7d8_14)
        
        if (ebx.b != 0)
            var_8_1.b = 2
            sub_5ca950(&var_7b4)
            ebx = var_7c0
        label_5c9d28:
            *(ebx + 0xa0) = *(data_bac434 + 0x10)
            sub_5cb680()
            void* var_7d8_15 = 0xe
            int32_t var_218_3 = 7
            void* const var_7dc_6 = &data_af28b4
            int32_t var_21c_3 = 0
            var_22c = 0
            sub_52e720(&var_22c, var_7dc_6, var_7d8_15)
            var_8_1.b = 7
            sub_684160(data_bac424, 5, &var_22c)
            var_8_1.b = 2
            
            if (var_218_3 u>= 8)
                j__free(var_22c.d)
            
            int32_t eax_12 = *(ebx + 0xa0)
            int32_t var_7c4
            int32_t var_7bc
            int32_t var_224
            int16_t* ecx_29
            
            if (eax_12 != 0)
                if (eax_12 != 1)
                    goto label_5ca816
                
                sub_5cb820(ebx + 0xc4, &var_7bc)
                sub_5cb870(ebx + 0xc4, &var_7c4)
                BSTR bstrString_3 = bstrString
                HMENU var_7dc_29 = nullptr
                enum WINDOW_EX_STYLE var_7e0_13 = WS_EX_LEFT
                enum WINDOW_STYLE var_7e4_11 = 0x46000000
                int32_t eax_34 = var_7c4 - 0xa
                var_224 = 0
                int32_t var_21c_10 = eax_34
                BSTR bstrString_4 = bstrString_3
                int32_t var_218_10 = var_7c0 - 0xa
                int32_t var_220_1 = 0
                sub_5cbc80(&data_4ebe284, data_4ebe3ac, &var_224, nullptr, var_7e4_11, var_7e0_13, 
                    var_7dc_29)
                
                if (data_4ebe284 == 0)
                    goto label_5ca816
                
                void* var_7d8_57 = 0x11
                int32_t var_218_11 = 7
                void* const var_7dc_30 = &data_af2bd8
                int32_t var_21c_11 = 0
                var_22c = 0
                sub_52e720(&var_22c, var_7dc_30, var_7d8_57)
                var_8_1.b = 0x1f
                sub_684160(data_bac424, 5, &var_22c)
                var_8_1.b = 2
                sub_52e8a0(&var_22c)
                int32_t ecx_72 = *(ebx + 0xa4) * 0x64
                int32_t* var_7d8_60 = &data_4ebe288
                int32_t esi_10 = std::_System_error_category::default_error_condition(EnableWindow(
                    data_4ebe284, 0))
                
                if (esi_10 s>= 0)
                    int32_t* esi_11 = data_4ebe288
                    var_8_1.b = 0x20
                    var_8_1.b = 2
                    esi_10 = (*(*esi_11 + 0xc))(esi_11, 
                        *sub_5c4b00(&bstrString, {6BF52A52-394A-11d3-B153-00C04F79FAA6}"), 
                        data_4ebe284, 0)
                    SysFreeString(bstrString)
                
                sub_52e820(&var_244, &data_af2c50)
                var_8_1.b = 0x21
                sub_684160(data_bac424, 5, &var_244)
                var_8_1.b = 2
                LRESULT ecx_79 = sub_52e8a0(&var_244)
                
                if (esi_10 s>= 0)
                    int32_t* var_7d8_66 = &data_4ebe28c
                    esi_10 = ___dyn_tls_init@12(ecx_79)
                    
                    if (esi_10 s>= 0)
                        int32_t* eax_44 = data_4ebe28c
                        esi_10 = (**eax_44)(eax_44, 0xaf2e38, &data_4ebe290)
                        
                        if (esi_10 s>= 0)
                            int32_t* esi_12 = data_4ebe290
                            esi_10 = (*(*esi_12 + 0x88))(esi_12, sub_5c4930())
                            
                            if (esi_10 s>= 0)
                                int32_t* eax_48 = data_4ebe290
                                esi_10 = (*(*eax_48 + 0x84))(eax_48, 0)
                                
                                if (esi_10 s>= 0)
                                    int32_t* eax_50 = data_4ebe290
                                    esi_10 = (*(*eax_50 + 0x74))(eax_50, 0)
                                    
                                    if (esi_10 s>= 0)
                                        int32_t* eax_52 = data_4ebe290
                                        esi_10 = (*(*eax_52 + 0x94))(eax_52, 1)
                                        
                                        if (esi_10 s>= 0)
                                            int32_t* eax_54 = data_4ebe290
                                            esi_10 = (*(*eax_54 + 0x30))(eax_54, &data_4ebe294)
                                            
                                            if (esi_10 s>= 0)
                                                int32_t* eax_56 = data_4ebe290
                                                esi_10 = (*(*eax_56 + 0x34))(eax_56, &data_4ebe298)
                                                
                                                if (esi_10 s>= 0)
                                                    int32_t* eax_58 = data_4ebe298
                                                    esi_10 =
                                                        (*(*eax_58 + 0x64))(eax_58, ecx_72 s/ 0xff)
                
                sub_52e820(&var_244, &data_af2c80)
                var_8_1.b = 0x22
                sub_684160(data_bac424, 5, &var_244)
                var_8_1.b = 2
                sub_52e8a0(&var_244)
                
                if (esi_10 s< 0)
                    goto label_5ca816
                
                PWSTR psz = &psz_1
                int32_t* esi_13 = data_4ebe290
                
                if (var_290 u>= 8)
                    psz = psz_1
                
                if ((*(*esi_13 + 0x24))(esi_13, SysAllocString(psz)) s< 0)
                    goto label_5ca816
                
                void* const var_7d8_79 = &data_af2ca4
                *(ebx + 0xa8) = 1
                sub_52e820(&var_244, var_7d8_79)
                var_8_1.b = 0x23
                sub_684160(data_bac424, 5, &var_244)
                ecx_29 = &var_244
                goto label_5ca80b
            
            int32_t var_278_1 = 7
            int32_t var_27c_1 = eax_12
            int16_t var_28c = eax_12.w
            var_8_1.b = 8
            BSTR bstrString_1 = bstrString
            int16_t* ecx_15
            
            if (bstrString_1 == 1)
                void* var_7d8_22 = 8
                int32_t var_2c0_1 = 7
                wchar16 const* const var_7dc_12 = u"avivideo"
                int32_t var_2c4_1 = 0
                int16_t var_2d4 = 0
                sub_52e720(&var_2d4, var_7dc_12, var_7d8_22)
                var_8_1.b = 9
                sub_52e3c0(&var_28c, &var_2d4, 0, 0xffffffff)
                ecx_15 = &var_2d4
            else
                void* var_7d8_18 = 9
                wchar16 const* const var_7dc_8 = u"MPEGVideo"
                
                if (bstrString_1 == 2)
                    int32_t var_2d8_1 = 7
                    int32_t var_2dc_1 = 0
                    int16_t var_2ec = 0
                    sub_52e720(&var_2ec, var_7dc_8, var_7d8_18)
                    var_8_1.b = 0xa
                    sub_52e3c0(&var_28c, &var_2ec, 0, 0xffffffff)
                    ecx_15 = &var_2ec
                else if (bstrString_1 == 3)
                    int32_t var_2f0_1 = 7
                    int32_t var_2f4_1 = 0
                    int16_t var_304 = 0
                    sub_52e720(&var_304, var_7dc_8, var_7d8_18)
                    var_8_1.b = 0xb
                    sub_52e3c0(&var_28c, &var_304, 0, 0xffffffff)
                    ecx_15 = &var_304
                else
                    int32_t var_2a8_1 = 7
                    int32_t var_2ac_1 = 0
                    int16_t var_2bc = 0
                    sub_52e720(&var_2bc, var_7dc_8, var_7d8_18)
                    var_8_1.b = 0xc
                    sub_52e3c0(&var_28c, &var_2bc, 0, 0xffffffff)
                    ecx_15 = &var_2bc
            
            var_8_1.b = 8
            sub_52e8a0(ecx_15)
            int16_t* eax_16 = &var_28c
            HWND hwndCallback = nullptr
            
            if (var_278_1 u>= 8)
                eax_16 = var_28c.d
            
            uint32_t uReturnLength = 0
            wchar16* lpstrReturnString = nullptr
            int16_t* var_7e4_1 = eax_16
            int32_t* psz_2 = &psz_1
            
            if (var_290 u>= 8)
                psz_2 = psz_1
            
            int32_t* psz_3 = psz_2
            int16_t* var_800
            sub_52e820(&var_800, u"open "%s" type %s alias SiglusMCIMovie wait")
            int16_t* lpstrCommand = sub_6ae4c0(&var_244, var_800)
            
            if (*(lpstrCommand + 0x14) u>= 8)
                lpstrCommand = *lpstrCommand
            
            uint32_t mcierr =
                mciSendStringW(lpstrCommand, lpstrReturnString, uReturnLength, hwndCallback)
            sub_52e8a0(&var_244)
            void pszText
            
            if (mcierr == 0)
                if (sub_5cb970() != 0)
                    int32_t var_7d8_31 = sub_6c1aa0(data_bac404, 0)
                    *(data_bac404 + 4)
                    void var_25c
                    int16_t* eax_22 = sub_6ada00(&var_25c)
                    var_8_1.b = 0x10
                    int16_t* eax_23 =
                        sub_548cb0(eax_22, window SiglusMCIMovie handle ", &var_22c, eax_22)
                    var_8_1.b = 0x11
                    int16_t* lpstrCommand_1 = sub_532b80(eax_23, eax_23, &var_244, u" wait")
                    
                    if (*(lpstrCommand_1 + 0x14) u>= 8)
                        lpstrCommand_1 = *lpstrCommand_1
                    
                    uint32_t mcierr_1 = mciSendStringW(lpstrCommand_1, nullptr, 0, nullptr)
                    sub_52e8a0(&var_244)
                    sub_52e8a0(&var_22c)
                    var_8_1.b = 8
                    sub_52e8a0(&var_25c)
                    int16_t* eax_25
                    
                    if (mcierr_1 == 0)
                        sub_5cb820(ebx + 0xc4, &var_7bc)
                        sub_5cb870(ebx + 0xc4, &var_7c4)
                        BSTR bstrString_2 = bstrString
                        int32_t eax_26 = var_7bc
                        int32_t edi_2 = var_7c4
                        var_224 = eax_26
                        int32_t var_21c_5 = eax_26 + edi_2
                        BSTR bstrString_5 = bstrString_2
                        void* var_218_5 = bstrString_2 + var_7c0
                        int16_t* var_7e4_3
                        var_7e4_3.o = var_224.o
                        sub_6c11e0(data_bac404, var_7e4_3)
                        HWND hwndCallback_1 = nullptr
                        uint32_t uReturnLength_1 = 0
                        wchar16* lpstrReturnString_1 = nullptr
                        void* var_7e4_4 = var_7c0
                        int32_t var_7e8_1 = edi_2
                        sub_52e820(&var_800, u"put SiglusMCIMovie destination at 0 0 %d %d wait")
                        int16_t* lpstrCommand_2 = sub_6ae4c0(&var_25c)
                        
                        if (*(lpstrCommand_2 + 0x14) u>= 8)
                            lpstrCommand_2 = *lpstrCommand_2
                        
                        uint32_t mcierr_2 = mciSendStringW(lpstrCommand_2, lpstrReturnString_1, 
                            uReturnLength_1, hwndCallback_1)
                        sub_52e8a0(&var_25c)
                        
                        if (mcierr_2 != 0)
                            mciGetErrorStringW(mcierr_2, &pszText, 0x100)
                            int32_t var_218_6 = 7
                            int32_t var_21c_6 = 0
                            var_22c = 0
                            var_8_1.b = 0x15
                            void** eax_29 = sub_532b80(0, &var_22c, &var_244, &data_af2a94)
                            var_8_1.b = 0x16
                            eax_25 = sub_532b80(eax_29, eax_29, &var_25c, &pszText)
                            var_8_1.b = 0x17
                            goto label_5ca172
                        
                        uint32_t mcierr_3 =
                            mciSendStringW(play SiglusMCIMovie", nullptr, 0, nullptr)
                        
                        if (mcierr_3 != 0)
                            mciGetErrorStringW(mcierr_3, &pszText, 0x100)
                            int32_t var_218_7 = 7
                            int32_t var_21c_7 = 0
                            var_22c = 0
                            var_8_1.b = 0x18
                            void** eax_30 = sub_532b80(0, &var_22c, &var_244, &data_af2ae4)
                            var_8_1.b = 0x19
                            eax_25 = sub_532b80(eax_30, eax_30, &var_25c, &pszText)
                            var_8_1.b = 0x1a
                            goto label_5ca172
                        
                        HWND hwndCallback_2 = nullptr
                        uint32_t uReturnLength_2 = 0
                        wchar16* lpstrReturnString_2 = nullptr
                        int32_t edi_6 = *(ebx + 0xa4) * 0x3e8 s/ 0xff
                        int32_t var_7e4_7 = edi_6
                        var_800 = u"setaudio SiglusMCIMovie left volume to %d"
                        void var_7fc
                        sub_52e820(&var_7fc, var_800)
                        var_800 = &var_25c
                        int16_t* lpstrCommand_3 = sub_6ae4c0(var_800, var_7fc)
                        
                        if (*(lpstrCommand_3 + 0x14) u>= 8)
                            lpstrCommand_3 = *lpstrCommand_3
                        
                        mciSendStringW(lpstrCommand_3, lpstrReturnString_2, uReturnLength_2, 
                            hwndCallback_2)
                        sub_52e8a0(&var_25c)
                        HWND hwndCallback_3 = nullptr
                        uint32_t uReturnLength_3 = 0
                        wchar16* lpstrReturnString_3 = nullptr
                        int32_t var_7e4_9 = edi_6
                        var_800 = u"setaudio SiglusMCIMovie right volume to %d"
                        sub_52e820(&var_7fc, var_800)
                        var_800 = &var_25c
                        int16_t* lpstrCommand_4 = sub_6ae4c0(var_800)
                        
                        if (*(lpstrCommand_4 + 0x14) u>= 8)
                            lpstrCommand_4 = *lpstrCommand_4
                        
                        uint32_t mcierr_4 = mciSendStringW(lpstrCommand_4, lpstrReturnString_3, 
                            uReturnLength_3, hwndCallback_3)
                        sub_52e8a0(&var_25c)
                        
                        if (mcierr_4 != 0)
                            mciGetErrorStringW(mcierr_4, &pszText, 0x100)
                            int32_t var_218_8 = 7
                            int32_t var_21c_8 = 0
                            var_22c = 0
                            var_8_1.b = 0x1b
                            void** eax_32 = sub_532b80(0, &var_22c, &var_244, &data_af2ae4)
                            var_8_1.b = 0x1c
                            eax_25 = sub_532b80(eax_32, eax_32, &var_25c, &pszText)
                            var_8_1.b = 0x1d
                            goto label_5ca172
                        
                        void* esi_6 = data_bac404
                        HWND hWnd = *(esi_6 + 4)
                        
                        if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s<= 0)
                            ShowWindow(*(esi_6 + 4), SW_SHOW)
                        
                        void* var_7d8_53 = 0xf
                        int32_t var_218_9 = 7
                        void* const var_7dc_27 = &data_af2bb8
                        int32_t var_21c_9 = 0
                        var_22c = 0
                        sub_52e720(&var_22c, var_7dc_27, var_7d8_53)
                        var_8_1.b = 0x1e
                        sub_684160(data_bac424, 5, &var_22c)
                        sub_52e8a0(&var_22c)
                        ecx_29 = &var_28c
                    else
                        mciGetErrorStringW(mcierr_1, &pszText, 0x100)
                        int32_t var_218_4 = 7
                        int32_t var_21c_4 = 0
                        var_22c = 0
                        var_8_1.b = 0x12
                        int16_t* eax_24 = sub_532b80(0, &var_22c, &var_244, &data_af29f8)
                        var_8_1.b = 0x13
                        eax_25 = sub_532b80(eax_24, eax_24, &var_25c, &pszText)
                        var_8_1.b = 0x14
                    label_5ca172:
                        sub_684160(data_bac424, 2, eax_25)
                        sub_52e8a0(&var_25c)
                        sub_52e8a0(&var_244)
                        sub_52e8a0(&var_22c)
                        ecx_29 = &var_28c
                    goto label_5ca80b
                
                void* var_7d8_28 = 0x14
                int32_t var_260_3 = 7
                void* const var_7dc_16 = &data_af2984
                int32_t var_264_3 = 0
                var_274 = 0
                sub_52e720(&var_274, var_7dc_16, var_7d8_28)
                var_8_1.b = 0xf
                sub_684160(data_bac424, 2, &var_274)
                sub_52e8a0(&var_274)
                result = sub_52e8a0(&var_28c)
            else
                int16_t* eax_18 = sub_532b80(mciGetErrorStringW(mcierr, &pszText, 0x100), &psz_1, 
                    &var_22c, &data_af2958)
                var_8_1.b = 0xd
                int16_t* eax_19 = sub_532b80(eax_18, eax_18, &var_244, &pszText)
                var_8_1.b = 0xe
                sub_684160(data_bac424, 2, eax_19)
                sub_52e8a0(&var_244)
                sub_52e8a0(&var_22c)
                ecx_29 = &var_28c
            label_5ca80b:
                var_8_1.b = 2
                sub_52e8a0(ecx_29)
            label_5ca816:
                result = sub_5cb350(ebx)
                
                if (result != 2)
                    sub_5cacb0(ebx)
                    sub_52e820(&var_244, &data_af2cc4)
                    var_8_1.b = 0x24
                    sub_684160(data_bac424, 3, &var_244)
                    result = sub_52e8a0(&var_244)
        else
            sub_5cacb0(var_7c0)
            result = sub_5ca950(&var_7b4)
    else
        int16_t* eax_4 = sub_548cb0(0, 0xaf286c, &var_244, ebx + 0xac)
        var_8_1.b = 3
        int16_t* eax_5 = sub_532b80(eax_4, eax_4, &var_22c, &data_af1b40)
        var_8_1.b = 4
        sub_684160(data_bac424, 2, eax_5)
        int32_t var_218
        
        if (var_218 u>= 8)
            j__free(var_22c.d)
        
        result = nullptr
        int32_t var_218_1 = 7
        int32_t var_21c_1 = 0
        var_22c = 0
        int32_t var_230
        
        if (var_230 u>= 8)
            result = j__free(var_244)
    
    if (var_290 u>= 8)
        result = j__free(psz_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
