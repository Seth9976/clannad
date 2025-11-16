// 函数: sub_695280
// 地址: 0x695280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8e46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_200 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_696100(arg1, arg3, *(arg1 + 0xa3e7c4), 0x100)

if (result != 0)
    int32_t var_204_1 = 0x3c
    int32_t var_58 = 0
    int32_t var_54
    _memset(&var_54, 0, var_204_1)
    int32_t (__fastcall* var_204_2)(int32_t* arg1) = sub_52e8a0
    void var_1d8
    sub_74675f(&var_1d8, 0x18, 0x10, sub_53a2c0)
    int32_t var_8_1 = 0
    int32_t* var_204_3 = &var_58
    int16_t* var_220 = u"NOVEL_MODE = %d"
    void var_21c
    sub_52e820(&var_21c, var_220)
    var_220 = arg2
    int16_t* ebx_1
    
    if (sub_6afb70(var_220, var_21c) == 0)
        int32_t* var_204_4 = &var_58
        var_220 = u"EXTEND_TYPE = %d"
        sub_52e820(&var_21c, var_220)
        var_220 = arg2
        
        if (sub_6afb70(var_220) == 0)
            int32_t* var_204_5 = &var_54
            int32_t* var_208_3 = &var_58
            sub_52e820(&var_220, u"WINDOW_POS = %d , %d")
            
            if (sub_6afb70(arg2, var_220) == 0)
                int32_t* var_204_6 = &var_54
                int32_t* var_208_4 = &var_58
                sub_52e820(&var_220, u"WINDOW_SIZE = %d , %d")
                
                if (sub_6afb70(arg2) == 0)
                    int32_t* var_204_7 = &var_54
                    int32_t* var_208_5 = &var_58
                    sub_52e820(&var_220, u"MESSAGE_POS = %d , %d")
                    
                    if (sub_6afb70(arg2) == 0)
                        int32_t var_4c
                        int32_t* var_204_8 = &var_4c
                        int32_t var_50
                        int32_t* var_208_6 = &var_50
                        int32_t* var_20c_3 = &var_54
                        int32_t* var_210_2 = &var_58
                        void var_228
                        sub_52e820(&var_228, u"MESSAGE_MARGIN = %d , %d , %d , %d")
                        
                        if (sub_6afb70(arg2, var_228) == 0)
                            int32_t* var_204_9 = &var_54
                            int32_t* var_208_7 = &var_58
                            sub_52e820(&var_220, u"MOJI_CNT = %d , %d")
                            
                            if (sub_6afb70(arg2) == 0)
                                int32_t* var_204_10 = &var_58
                                var_220 = u"MOJI_SIZE = %d"
                                sub_52e820(&var_21c, var_220)
                                var_220 = arg2
                                
                                if (sub_6afb70(var_220) == 0)
                                    int32_t* var_204_11 = &var_54
                                    int32_t* var_208_8 = &var_58
                                    sub_52e820(&var_220, u"MOJI_SPACE = %d , %d")
                                    
                                    if (sub_6afb70(arg2) == 0)
                                        int32_t* var_204_12 = &var_58
                                        var_220 = u"MOJI_COLOR = %d"
                                        sub_52e820(&var_21c, var_220)
                                        var_220 = arg2
                                        
                                        if (sub_6afb70(var_220) == 0)
                                            int32_t* var_204_13 = &var_58
                                            var_220 = u"SHADOW_COLOR = %d"
                                            sub_52e820(&var_21c, var_220)
                                            var_220 = arg2
                                            
                                            if (sub_6afb70(var_220) == 0)
                                                int32_t* var_204_14 = &var_58
                                                var_220 = u"FUCHI_COLOR = %d"
                                                sub_52e820(&var_21c, var_220)
                                                var_220 = arg2
                                                
                                                if (sub_6afb70(var_220) == 0)
                                                    int32_t* var_204_15 = &var_58
                                                    var_220 = u"RUBY_SIZE = %d"
                                                    sub_52e820(&var_21c, var_220)
                                                    var_220 = arg2
                                                    
                                                    if (sub_6afb70(var_220) == 0)
                                                        int32_t* var_204_16 = &var_58
                                                        var_220 = u"RUBY_SPACE = %d"
                                                        sub_52e820(&var_21c, var_220)
                                                        var_220 = arg2
                                                        
                                                        if (sub_6afb70(var_220) == 0)
                                                            int32_t* var_204_17 = &var_58
                                                            var_220 = u"WAKU_NO = %d"
                                                            sub_52e820(&var_21c, var_220)
                                                            var_220 = arg2
                                                            
                                                            if (sub_6afb70(var_220) == 0)
                                                                int32_t* var_204_18 = &var_54
                                                                int32_t* var_208_9 = &var_58
                                                                sub_52e820(&var_220, 
                                                                    WAKU_POS = %d , %d")
                                                                
                                                                if (sub_6afb70(arg2) == 0)
                                                                    int32_t* var_204_19 = &var_58
                                                                    var_220 = u"NAME_DISP_MODE = %d"
                                                                    sub_52e820(&var_21c, var_220)
                                                                    var_220 = arg2
                                                                    
                                                                    if (sub_6afb70(var_220) == 0)
                                                                        int32_t* var_204_20 = &var_58
                                                                        var_220 = u"NAME_NEWLINE = %d"
                                                                        sub_52e820(&var_21c, var_220)
                                                                        var_220 = arg2
                                                                        
                                                                        if (sub_6afb70(var_220) == 0)
                                                                            int32_t* var_204_21 = &var_58
                                                                            var_220 = u"NAME_BRACKET = %d"
                                                                            sub_52e820(&var_21c, var_220)
                                                                            var_220 = arg2
                                                                            
                                                                            if (sub_6afb70(var_220) == 0)
                                                                                int32_t* var_204_22 = &var_58
                                                                                var_220 = u"NAME_MOJI_COLOR = %d"
                                                                                sub_52e820(&var_21c, var_220)
                                                                                var_220 = arg2
                                                                                
                                                                                if (sub_6afb70(var_220) == 0)
                                                                                    int32_t* var_204_23 = &var_58
                                                                                    var_220 = u"NAME_SHADOW_COLOR = %d"
                                                                                    sub_52e820(&var_21c, var_220)
                                                                                    var_220 = arg2
                                                                                    
                                                                                    if (sub_6afb70(var_220) == 0)
                                                                                        int32_t* var_204_24 = &var_58
                                                                                        var_220 = u"NAME_FUCHI_COLOR = %d"
                                                                                        sub_52e820(&var_21c, var_220)
                                                                                        var_220 = arg2
                                                                                        
                                                                                        if (sub_6afb70(var_220) == 0)
                                                                                            int32_t* var_204_25 = &var_4c
                                                                                            int32_t* var_208_10 = &var_50
                                                                                            int32_t* var_20c_4 = &var_54
                                                                                            int32_t* var_210_3 = &var_58
                                                                                            sub_52e820(&var_228, 
                                                                                                TALK_MARGIN = %d, %d, %d, %d")
                                                                                            
                                                                                            if (sub_6afb70(arg2) == 0)
                                                                                                int32_t* var_204_26 = &var_58
                                                                                                var_220 = u"OVERFLOW_CHECK_SIZE = %d"
                                                                                                sub_52e820(&var_21c, var_220)
                                                                                                var_220 = arg2
                                                                                                
                                                                                                if (sub_6afb70(var_220) == 0)
                                                                                                    int32_t* var_204_27 = &var_58
                                                                                                    var_220 = u"MSG_BACK_INSERT_NL = %d"
                                                                                                    sub_52e820(&var_21c, var_220)
                                                                                                    var_220 = arg2
                                                                                                    
                                                                                                    if (sub_6afb70(var_220) == 0)
                                                                                                        int32_t* var_204_28 = &var_58
                                                                                                        var_220 = u"NAME_EXTEND_TYPE = %d"
                                                                                                        sub_52e820(&var_21c, var_220)
                                                                                                        var_220 = arg2
                                                                                                        
                                                                                                        if (sub_6afb70(var_220) == 0)
                                                                                                            int32_t* var_204_29 = &var_58
                                                                                                            var_220 = u"NAME_WINDOW_ALIGN = %d"
                                                                                                            sub_52e820(&var_21c, var_220)
                                                                                                            var_220 = arg2
                                                                                                            
                                                                                                            if (sub_6afb70(var_220) == 0)
                                                                                                                int32_t* var_204_30 = &var_54
                                                                                                                int32_t* var_208_11 = &var_58
                                                                                                                sub_52e820(&var_220, 
                                                                                                                    NAME_WINDOW_POS = %d , %d")
                                                                                                                
                                                                                                                if (sub_6afb70(arg2) == 0)
                                                                                                                    int32_t* var_204_31 = &var_54
                                                                                                                    int32_t* var_208_12 = &var_58
                                                                                                                    sub_52e820(&var_220, 
                                                                                                                        NAME_WINDOW_SIZE = %d , %d")
                                                                                                                    
                                                                                                                    if (sub_6afb70(arg2) == 0)
                                                                                                                        int32_t* var_204_32 = &var_54
                                                                                                                        int32_t* var_208_13 = &var_58
                                                                                                                        sub_52e820(&var_220, 
                                                                                                                            NAME_MESSAGE_POS = %d , %d")
                                                                                                                        
                                                                                                                        if (sub_6afb70(arg2) == 0)
                                                                                                                            int32_t* var_204_33 = &var_54
                                                                                                                            int32_t* var_208_14 = &var_58
                                                                                                                            sub_52e820(&var_220, 
                                                                                                                                NAME_MESSAGE_POS_REP = %d , %d")
                                                                                                                            
                                                                                                                            if (sub_6afb70(arg2) == 0)
                                                                                                                                int32_t* var_204_34 = &var_4c
                                                                                                                                int32_t* var_208_15 = &var_50
                                                                                                                                int32_t* var_20c_5 = &var_54
                                                                                                                                int32_t* var_210_4 = &var_58
                                                                                                                                sub_52e820(&var_228, 
                                                                                                                                    NAME_MESSAGE_MARGIN = %d , %d , %d , %d")
                                                                                                                                
                                                                                                                                if (sub_6afb70(arg2) == 0)
                                                                                                                                    int32_t* var_204_35 = &var_58
                                                                                                                                    var_220 = u"NAME_MOJI_SIZE = %d"
                                                                                                                                    sub_52e820(&var_21c, var_220)
                                                                                                                                    var_220 = arg2
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_220) == 0)
                                                                                                                                        int32_t* var_204_36 = &var_54
                                                                                                                                        int32_t* var_208_16 = &var_58
                                                                                                                                        sub_52e820(&var_220, 
                                                                                                                                            NAME_MOJI_SPACE = %d , %d")
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(arg2) == 0)
                                                                                                                                            int32_t* var_204_37 = &var_58
                                                                                                                                            var_220 = u"NAME_MOJI_CNT = %d"
                                                                                                                                            sub_52e820(&var_21c, var_220)
                                                                                                                                            var_220 = arg2
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_220) == 0)
                                                                                                                                                int32_t* var_204_38 = &var_58
                                                                                                                                                var_220 = u"NAME_WAKU_NO = %d"
                                                                                                                                                sub_52e820(&var_21c, var_220)
                                                                                                                                                var_220 = arg2
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_220) == 0)
                                                                                                                                                    int32_t* var_204_39 = &var_58
                                                                                                                                                    var_220 = u"FACE_HIDE_NAME = %d"
                                                                                                                                                    sub_52e820(&var_21c, var_220)
                                                                                                                                                    var_220 = arg2
                                                                                                                                                    
                                                                                                                                                    if (sub_6afb70(var_220) == 0)
                                                                                                                                                        int32_t* var_204_40 = &var_58
                                                                                                                                                        var_220 = u"OPEN_ANIME_TYPE = %d"
                                                                                                                                                        sub_52e820(&var_21c, var_220)
                                                                                                                                                        var_220 = arg2
                                                                                                                                                        
                                                                                                                                                        if (sub_6afb70(var_220) == 0)
                                                                                                                                                            int32_t* var_204_41 = &var_58
                                                                                                                                                            var_220 = u"OPEN_ANIME_TIME = %d"
                                                                                                                                                            sub_52e820(&var_21c, var_220)
                                                                                                                                                            var_220 = arg2
                                                                                                                                                            
                                                                                                                                                            if (sub_6afb70(var_220) == 0)
                                                                                                                                                                int32_t* var_204_42 = &var_58
                                                                                                                                                                var_220 = u"CLOSE_ANIME_TYPE = %d"
                                                                                                                                                                sub_52e820(&var_21c, var_220)
                                                                                                                                                                var_220 = arg2
                                                                                                                                                                
                                                                                                                                                                if (sub_6afb70(var_220) == 0)
                                                                                                                                                                    int32_t* var_204_43 = &var_58
                                                                                                                                                                    var_220 = u"CLOSE_ANIME_TIME = %d"
                                                                                                                                                                    sub_52e820(&var_21c, var_220)
                                                                                                                                                                    var_220 = arg2
                                                                                                                                                                    
                                                                                                                                                                    if (sub_6afb70(var_220) == 0)
                                                                                                                                                                        ebx_1.b = sub_6962d0(arg1)
                                                                                                                                                                    else
                                                                                                                                                                        ebx_1.b = 1
                                                                                                                                                                        *(arg3 * 0xfc + arg1 + 0xa2ecbc) =
                                                                                                                                                                            var_58
                                                                                                                                                                else
                                                                                                                                                                    ebx_1.b = 1
                                                                                                                                                                    *(arg3 * 0xfc + arg1 + 0xa2ecb8) =
                                                                                                                                                                        var_58
                                                                                                                                                            else
                                                                                                                                                                ebx_1.b = 1
                                                                                                                                                                *(arg3 * 0xfc + arg1 + 0xa2ecb4) =
                                                                                                                                                                    var_58
                                                                                                                                                        else
                                                                                                                                                            ebx_1.b = 1
                                                                                                                                                            *(arg3 * 0xfc + arg1 + sub_a2ecb0) =
                                                                                                                                                                var_58
                                                                                                                                                    else
                                                                                                                                                        ebx_1.b = 1
                                                                                                                                                        *(arg3 * 0xfc + arg1 + 0xa2ecac) =
                                                                                                                                                            var_58
                                                                                                                                                else
                                                                                                                                                    ebx_1.b = 1
                                                                                                                                                    *(arg3 * 0xfc + arg1 + 0xa2ec88) =
                                                                                                                                                        var_58
                                                                                                                                            else
                                                                                                                                                ebx_1.b = 1
                                                                                                                                                *(arg3 * 0xfc + arg1 + 0xa2ec78) =
                                                                                                                                                    var_58
                                                                                                                                        else
                                                                                                                                            ebx_1.b = 1
                                                                                                                                            int32_t edx_11 = var_54
                                                                                                                                            int32_t ecx_64 = arg3 * 0xfc
                                                                                                                                            *(ecx_64 + arg1 + 0xa2ec70) = var_58
                                                                                                                                            *(ecx_64 + arg1 + 0xa2ec74) = edx_11
                                                                                                                                    else
                                                                                                                                        ebx_1.b = 1
                                                                                                                                        *(arg3 * 0xfc + arg1 + &data_a2ec6c) =
                                                                                                                                            var_58
                                                                                                                                else
                                                                                                                                    ebx_1.b = 1
                                                                                                                                    int32_t var_1e8_3 = var_54
                                                                                                                                    int32_t var_1e4_3 = var_50
                                                                                                                                    int32_t var_1e0_3 = var_4c
                                                                                                                                    *(arg3 * 0xfc + arg1 + 0xa2ec5c) =
                                                                                                                                        var_58.o
                                                                                                                            else
                                                                                                                                ebx_1.b = 1
                                                                                                                                int32_t edx_10 = var_54
                                                                                                                                int32_t ecx_59 = arg3 * 0xfc
                                                                                                                                *(ecx_59 + arg1 + 0xa2ec54) = var_58
                                                                                                                                *(ecx_59 + arg1 + 0xa2ec58) = edx_10
                                                                                                                        else
                                                                                                                            ebx_1.b = 1
                                                                                                                            int32_t edx_9 = var_54
                                                                                                                            int32_t ecx_57 = arg3 * 0xfc
                                                                                                                            *(ecx_57 + arg1 + 0xa2ec4c) = var_58
                                                                                                                            *(ecx_57 + arg1 + sub_a2ec50) = edx_9
                                                                                                                    else
                                                                                                                        ebx_1.b = 1
                                                                                                                        int32_t edx_8 = var_54
                                                                                                                        int32_t ecx_55 = arg3 * 0xfc
                                                                                                                        *(ecx_55 + arg1 + 0xa2ec44) = var_58
                                                                                                                        *(ecx_55 + arg1 + 0xa2ec48) = edx_8
                                                                                                                else
                                                                                                                    ebx_1.b = 1
                                                                                                                    int32_t edx_7 = var_54
                                                                                                                    int32_t ecx_53 = arg3 * 0xfc
                                                                                                                    *(ecx_53 + arg1 + 0xa2ec3c) = var_58
                                                                                                                    *(ecx_53 + arg1 + 0xa2ec40) = edx_7
                                                                                                            else
                                                                                                                ebx_1.b = 1
                                                                                                                *(arg3 * 0xfc + arg1 + 0xa2ec38) =
                                                                                                                    var_58
                                                                                                        else
                                                                                                            ebx_1.b = 1
                                                                                                            *(arg3 * 0xfc + arg1 + 0xa2ec34) =
                                                                                                                var_58
                                                                                                    else
                                                                                                        ebx_1.b = 1
                                                                                                        *(arg3 * 0xfc + arg1 + 0xa2eca8) =
                                                                                                            var_58
                                                                                                else
                                                                                                    ebx_1.b = 1
                                                                                                    *(arg3 * 0xfc + arg1 + 0xa2eca4) =
                                                                                                        var_58
                                                                                            else
                                                                                                ebx_1.b = 1
                                                                                                int32_t var_1e8_2 = var_54
                                                                                                int32_t var_1e4_2 = var_50
                                                                                                int32_t var_1e0_2 = var_4c
                                                                                                *(arg3 * 0xfc + arg1 + 0xa2ec94) =
                                                                                                    var_58.o
                                                                                        else
                                                                                            ebx_1.b = 1
                                                                                            *(arg3 * 0xfc + arg1 + 0xa2ec84) =
                                                                                                var_58
                                                                                    else
                                                                                        ebx_1.b = 1
                                                                                        *(arg3 * 0xfc + arg1 + 0xa2ec80) =
                                                                                            var_58
                                                                                else
                                                                                    ebx_1.b = 1
                                                                                    *(arg3 * 0xfc + arg1 + 0xa2ec7c) =
                                                                                        var_58
                                                                            else
                                                                                ebx_1.b = 1
                                                                                *(arg3 * 0xfc + arg1 + &data_a2ec30) =
                                                                                    var_58
                                                                        else
                                                                            ebx_1.b = 1
                                                                            *(arg3 * 0xfc + arg1 + 0xa2ec2c) =
                                                                                var_58
                                                                    else
                                                                        ebx_1.b = 1
                                                                        *(arg3 * 0xfc + arg1 + 0xa2ec28) =
                                                                            var_58
                                                                else
                                                                    ebx_1.b = 1
                                                                    int32_t edx_6 = var_54
                                                                    int32_t ecx_30 = arg3 * 0xfc
                                                                    *(ecx_30 + arg1 + 0xa2ec20) = var_58
                                                                    *(ecx_30 + arg1 + 0xa2ec24) = edx_6
                                                            else
                                                                ebx_1.b = 1
                                                                *(arg3 * 0xfc + arg1 + 0xa2ec1c) =
                                                                    var_58
                                                        else
                                                            ebx_1.b = 1
                                                            *(arg3 * 0xfc + arg1 + 0xa2ec18) =
                                                                var_58
                                                    else
                                                        ebx_1.b = 1
                                                        *(arg3 * 0xfc + arg1 + 0xa2ec14) = var_58
                                                else
                                                    ebx_1.b = 1
                                                    *(arg3 * 0xfc + arg1 + 0xa2ec10) = var_58
                                            else
                                                ebx_1.b = 1
                                                *(arg3 * 0xfc + arg1 + &data_a2ec0c) = var_58
                                        else
                                            ebx_1.b = 1
                                            *(arg3 * 0xfc + arg1 + 0xa2ec08) = var_58
                                    else
                                        ebx_1.b = 1
                                        int32_t edx_5 = var_54
                                        int32_t ecx_16 = arg3 * 0xfc
                                        *(ecx_16 + arg1 + 0xa2ec00) = var_58
                                        *(ecx_16 + arg1 + 0xa2ec04) = edx_5
                                else
                                    ebx_1.b = 1
                                    *(arg3 * 0xfc + arg1 + 0xa2ebfc) = var_58
                            else
                                ebx_1.b = 1
                                int32_t edx_4 = var_54
                                int32_t ecx_12 = arg3 * 0xfc
                                *(ecx_12 + arg1 + 0xa2ebf4) = var_58
                                *(ecx_12 + arg1 + 0xa2ebf8) = edx_4
                        else
                            ebx_1.b = 1
                            int32_t var_1e8_1 = var_54
                            int32_t var_1e4_1 = var_50
                            int32_t var_1e0_1 = var_4c
                            *(arg3 * 0xfc + arg1 + 0xa2ebe4) = var_58.o
                    else
                        ebx_1.b = 1
                        int32_t edx_3 = var_54
                        int32_t ecx_9 = arg3 * 0xfc
                        *(ecx_9 + arg1 + 0xa2ebdc) = var_58
                        *(ecx_9 + arg1 + 0xa2ebe0) = edx_3
                else
                    ebx_1.b = 1
                    int32_t edx_2 = var_54
                    int32_t ecx_7 = arg3 * 0xfc
                    *(ecx_7 + arg1 + 0xa2ebd4) = var_58
                    *(ecx_7 + arg1 + 0xa2ebd8) = edx_2
            else
                ebx_1.b = 1
                int32_t edx_1 = var_54
                int32_t ecx_5 = arg3 * 0xfc
                *(ecx_5 + arg1 + 0xa2ebcc) = var_58
                *(ecx_5 + arg1 + &data_a2ebd0) = edx_1
        else
            ebx_1.b = 1
            *(arg3 * 0xfc + arg1 + 0xa2ebc8) = var_58
    else
        ebx_1.b = 1
        *(arg3 * 0xfc + arg1 + 0xa2ebc4) = var_58
    
    int32_t var_8_2 = 0xffffffff
    `eh vector vbase constructor iterator'(&var_1d8, 0x18, 0x10, sub_52e8a0)
    result = ebx_1.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
