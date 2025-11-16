// 函数: sub_68df30
// 地址: 0x68df30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c8d17
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_224
int32_t eax_2 = __security_cookie ^ &var_224
int32_t __saved_edi
int32_t var_234 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_238 = 0x3c
char var_23c = 0
int32_t var_1dc
int32_t* var_240 = &var_1dc
int32_t var_1e0 = 0
_memset(var_240, var_23c, var_238)
int32_t (__fastcall* var_238_1)(int32_t* arg1) = sub_52e8a0
void* var_1a0
sub_74675f(&var_1a0, 0x18, 0x10, sub_53a2c0)
int32_t var_c_1 = 0
int32_t* eax_5 = arg2
int32_t edi = eax_5[1]
int32_t esi = *eax_5
sub_6af2c0(eax_5, &eax_5[2], eax_5, edi)
int32_t* ecx_2 = arg2
int32_t* ebx

if (*ecx_2 == ecx_2[1])
labelid_1:
    ebx.b = 1
else
    *ecx_2 = esi
    ecx_2[1] = edi
    int16_t* var_250 = &data_af77d0
    void var_24c
    sub_52e820(&var_24c, var_250)
    int16_t* edi_1 = arg2
    var_250 = edi_1
    
    if (sub_6afb70(var_250, var_24c) != 0)
    labelid_1:
        ebx.b = 1
    else
        int32_t* var_238_3 = &var_1e0
        int16_t* var_254 = u"#DEBUG_ERROR_PATNO_OUT_OF_RANGE = %d"
        sub_52e820(&var_250, var_254)
        var_254 = edi_1
        
        if (sub_6afb70(var_254, var_250) == 0)
            void** var_238_4 = &var_1a0
            var_254 = u"#GAMEID = %s"
            sub_52e820(&var_250, var_254)
            var_254 = edi_1
            void* ecx_6
            
            if (sub_6afb70(var_254) == 0)
                void** var_238_5 = &var_1a0
                var_254 = u"#GAMENAME = %s"
                sub_52e820(&var_250, var_254)
                var_254 = edi_1
                
                if (sub_6afb70(var_254) != 0)
                    ecx_6 = &arg1[7]
                    goto label_68e0dc
                
                void** var_238_6 = &var_1a0
                var_254 = u"#GAMEVERSION = %s"
                sub_52e820(&var_250, var_254)
                var_254 = edi_1
                
                if (sub_6afb70(var_254) != 0)
                    ecx_6 = &arg1[0xd]
                    goto label_68e0dc
                
                void** var_238_7 = &var_1a0
                var_254 = u"#DISCMARK = %s"
                sub_52e820(&var_250, var_254)
                var_254 = edi_1
                
                if (sub_6afb70(var_254) != 0)
                    ecx_6 = &arg1[0x13]
                    goto label_68e0dc
                
                void** var_238_9 = &var_1a0
                var_254 = u"#MANUAL_PATH = %s"
                sub_52e820(&var_250, var_254)
                var_254 = edi_1
                void** var_238_10
                void* ecx_11
                
                if (sub_6afb70(var_254) == 0)
                    int32_t* var_238_11 = &var_1dc
                    int32_t* var_23c_3 = &var_1e0
                    int16_t* var_258 = u"#SCREEN_SIZE = %d , %d"
                    sub_52e820(&var_254, var_258)
                    var_258 = edi_1
                    
                    if (sub_6afb70(var_258, var_254) == 0)
                        int32_t* var_238_12 = &var_1e0
                        void** var_23c_4 = &var_1a0
                        var_258 = u"#START_SCENE = %s , %d"
                        sub_52e820(&var_254, var_258)
                        var_258 = edi_1
                        
                        if (sub_6afb70(var_258) == 0)
                            var_254 = u"#START_SCENE = %s"
                            sub_52e820(&var_250, var_254)
                            var_254 = edi_1
                            
                            if (sub_6afb70(var_254) != 0)
                                var_238_10 = &var_1a0
                                ecx_11 = &arg1[0x21]
                                goto label_68e663
                            
                            int32_t* var_238_14 = &var_1e0
                            void** var_23c_5 = &var_1a0
                            var_258 = u"#MENU_SCENE = %s , %d"
                            sub_52e820(&var_254, var_258)
                            var_258 = edi_1
                            
                            if (sub_6afb70(var_258) == 0)
                                var_254 = u"#MENU_SCENE = %s"
                                sub_52e820(&var_250, var_254)
                                var_254 = edi_1
                                
                                if (sub_6afb70(var_254) != 0)
                                    var_238_10 = &var_1a0
                                    ecx_11 = &arg1[0x28]
                                    goto label_68e663
                                
                                int32_t* var_238_16 = &var_1e0
                                void** var_23c_6 = &var_1a0
                                var_258 = u"#CANCEL_SCENE = %s , %d"
                                sub_52e820(&var_254, var_258)
                                var_258 = edi_1
                                
                                if (sub_6afb70(var_258) == 0)
                                    var_254 = u"#CANCEL_SCENE = %s"
                                    sub_52e820(&var_250, var_254)
                                    var_254 = edi_1
                                    
                                    if (sub_6afb70(var_254) != 0)
                                        var_238_10 = &var_1a0
                                        ecx_11 = &arg1[0x2f]
                                        goto label_68e663
                                    
                                    int32_t* var_238_18 = &var_1e0
                                    void** var_23c_7 = &var_1a0
                                    var_258 = u"#CONFIG_SCENE = %s , %d"
                                    sub_52e820(&var_254, var_258)
                                    var_258 = edi_1
                                    
                                    if (sub_6afb70(var_258) == 0)
                                        var_254 = u"#CONFIG_SCENE = %s"
                                        sub_52e820(&var_250, var_254)
                                        var_254 = edi_1
                                        
                                        if (sub_6afb70(var_254) != 0)
                                            var_238_10 = &var_1a0
                                            ecx_11 = &arg1[0x36]
                                            goto label_68e663
                                        
                                        int32_t* var_238_20 = &var_1e0
                                        void** var_23c_8 = &var_1a0
                                        var_258 = u"#SAVE_SCENE = %s , %d"
                                        sub_52e820(&var_254, var_258)
                                        var_258 = edi_1
                                        
                                        if (sub_6afb70(var_258) == 0)
                                            var_254 = u"#SAVE_SCENE = %s"
                                            sub_52e820(&var_250, var_254)
                                            var_254 = edi_1
                                            
                                            if (sub_6afb70(var_254) != 0)
                                                var_238_10 = &var_1a0
                                                ecx_11 = &arg1[0x3d]
                                                goto label_68e663
                                            
                                            int32_t* var_238_22 = &var_1e0
                                            void** var_23c_9 = &var_1a0
                                            var_258 = u"#LOAD_SCENE = %s , %d"
                                            sub_52e820(&var_254, var_258)
                                            var_258 = edi_1
                                            
                                            if (sub_6afb70(var_258) == 0)
                                                var_254 = u"#LOAD_SCENE = %s"
                                                sub_52e820(&var_250, var_254)
                                                var_254 = edi_1
                                                
                                                if (sub_6afb70(var_254) != 0)
                                                    var_238_10 = &var_1a0
                                                    ecx_11 = &arg1[0x44]
                                                    goto label_68e663
                                                
                                                int32_t* var_238_24 = &var_1e0
                                                void** var_23c_10 = &var_1a0
                                                var_258 = u"#LOAD_AFTER_CALL = %s , %d"
                                                sub_52e820(&var_254, var_258)
                                                var_258 = edi_1
                                                
                                                if (sub_6afb70(var_258) == 0)
                                                    var_254 = u"#LOAD_AFTER_CALL = %s"
                                                    sub_52e820(&var_250, var_254)
                                                    var_254 = edi_1
                                                    var_238_10 = &var_1a0
                                                    
                                                    if (sub_6afb70(var_254) != 0)
                                                        ecx_11 = &arg1[0x4b]
                                                        goto label_68e663
                                                    
                                                    var_254 = u"#DUMMY_CHECK_STR = %s"
                                                    sub_52e820(&var_250, var_254)
                                                    var_254 = edi_1
                                                    var_238_10 = &var_1a0
                                                    
                                                    if (sub_6afb70(var_254) != 0)
                                                        ecx_11 = &arg1[0x52]
                                                        goto label_68e663
                                                    
                                                    var_254 = u"#DUMMY_CHECK_OK_STR = %s"
                                                    sub_52e820(&var_250, var_254)
                                                    var_254 = edi_1
                                                    
                                                    if (sub_6afb70(var_254) != 0)
                                                        var_238_10 = &var_1a0
                                                        ecx_11 = &arg1[0x58]
                                                        goto label_68e663
                                                    
                                                    int32_t* var_238_26 = &var_1e0
                                                    var_254 = #SYSTEM . EXTRA_INT_VALUE . CNT = %d"
                                                    sub_52e820(&var_250, var_254)
                                                    var_254 = edi_1
                                                    
                                                    if (sub_6afb70(var_254) == 0)
                                                        int32_t* var_238_28 = &var_1dc
                                                        int32_t* var_23c_12 = &var_1e0
                                                        var_258 =
                                                            #SYSTEM . EXTRA_INT_VALUE . %d = %d"
                                                        sub_52e820(&var_254, var_258)
                                                        var_258 = edi_1
                                                        
                                                        if (sub_6afb70(var_258) == 0)
                                                            int32_t* var_238_30 = &var_1e0
                                                            var_254 =
                                                                #SYSTEM . EXTRA_STR_VALUE . CNT = %d"
                                                            sub_52e820(&var_250, var_254)
                                                            var_254 = edi_1
                                                            
                                                            if (sub_6afb70(var_254) == 0)
                                                                void** var_238_32 = &var_1a0
                                                                int32_t* var_23c_15 = &var_1e0
                                                                var_258 =
                                                                    #SYSTEM . EXTRA_STR_VALUE . %d = %s"
                                                                sub_52e820(&var_254, var_258)
                                                                var_258 = edi_1
                                                                void* ecx_46
                                                                
                                                                if (sub_6afb70(var_258) == 0)
                                                                    int32_t* var_238_35 = &var_1e0
                                                                    var_254 = u"#FLICK_SCENE . CNT = %d"
                                                                    sub_52e820(&var_250, var_254)
                                                                    var_254 = edi_1
                                                                    
                                                                    if (sub_6afb70(var_254) == 0)
                                                                        int32_t* var_238_37 = &var_1e0
                                                                        var_254 = u"#FLICK_SCENE . %d . "
                                                                        sub_52e820(&var_250, var_254)
                                                                        var_254 = edi_1
                                                                        int32_t* var_238_38 = &var_1e0
                                                                        
                                                                        if (sub_6afb70(var_254) == 0)
                                                                            var_254 = u"#SHORTCUT . CNT = %d"
                                                                            sub_52e820(&var_250, var_254)
                                                                            var_254 = edi_1
                                                                            
                                                                            if (sub_6afb70(var_254) == 0)
                                                                                int32_t* var_238_42 = &var_1e0
                                                                                var_254 = u"#SHORTCUT . %d . "
                                                                                sub_52e820(&var_250, var_254)
                                                                                var_254 = edi_1
                                                                                int32_t* var_238_43 = &var_1e0
                                                                                void* var_188
                                                                                
                                                                                if (sub_6afb70(var_254) == 0)
                                                                                    var_254 = u"#ICON . CNT = %d"
                                                                                    sub_52e820(&var_250, var_254)
                                                                                    var_254 = edi_1
                                                                                    
                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                        int32_t* var_238_51 = &var_1e0
                                                                                        var_254 = u"#ICON . %d . "
                                                                                        sub_52e820(&var_250, var_254)
                                                                                        var_254 = edi_1
                                                                                        
                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                            int32_t* var_238_56 = &var_1e0
                                                                                            var_254 = u"#MOUSE_CURSOR . CNT = %d"
                                                                                            sub_52e820(&var_250, var_254)
                                                                                            var_254 = edi_1
                                                                                            
                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                int32_t* var_238_58 = &var_1e0
                                                                                                var_254 = u"#MOUSE_CURSOR . %d . "
                                                                                                sub_52e820(&var_250, var_254)
                                                                                                var_254 = edi_1
                                                                                                
                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                    int32_t* var_238_62 = &var_1e0
                                                                                                    var_254 = #MOUSE_CURSOR . DEFAULT = %d"
                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                    var_254 = edi_1
                                                                                                    
                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                        var_250 = u"#CONFIG . "
                                                                                                        sub_52e820(&var_24c, var_250)
                                                                                                        var_250 = edi_1
                                                                                                        int32_t* var_260
                                                                                                        int16_t* var_25c
                                                                                                        char var_1d8
                                                                                                        char var_1d4
                                                                                                        
                                                                                                        if (sub_6afb70(var_250) == 0)
                                                                                                            var_250 = u"#SYSCOMMENU . "
                                                                                                            sub_52e820(&var_24c, var_250)
                                                                                                            var_250 = edi_1
                                                                                                            
                                                                                                            if (sub_6afb70(var_250) == 0)
                                                                                                                var_250 = u"#DIALOG_STYLE . "
                                                                                                                sub_52e820(&var_24c, var_250)
                                                                                                                var_250 = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_250) == 0)
                                                                                                                    var_250 = u"#DIALOG_TAB_EXIST . "
                                                                                                                    sub_52e820(&var_24c, var_250)
                                                                                                                    var_250 = edi_1
                                                                                                                    
                                                                                                                    if (sub_6afb70(var_250) == 0)
                                                                                                                        var_250 = u"#DIALOG_EXIST . "
                                                                                                                        sub_52e820(&var_24c, var_250)
                                                                                                                        var_250 = edi_1
                                                                                                                        
                                                                                                                        if (sub_6afb70(var_250) == 0)
                                                                                                                            var_250 = u"#DIALOG . "
                                                                                                                            sub_52e820(&var_24c, var_250)
                                                                                                                            var_250 = edi_1
                                                                                                                            
                                                                                                                            if (sub_6afb70(var_250) == 0)
                                                                                                                                var_250 = u"#WARNINGINFO . "
                                                                                                                                sub_52e820(&var_24c, var_250)
                                                                                                                                var_250 = edi_1
                                                                                                                                
                                                                                                                                if (sub_6afb70(var_250) == 0)
                                                                                                                                    var_250 = u"#SAVELOAD_DIALOG . "
                                                                                                                                    sub_52e820(&var_24c, var_250)
                                                                                                                                    var_250 = edi_1
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_250) == 0)
                                                                                                                                        var_250 = u"#SAVEINFO . "
                                                                                                                                        sub_52e820(&var_24c, var_250)
                                                                                                                                        var_250 = edi_1
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(var_250) == 0)
                                                                                                                                            var_250 = u"#LOADINFO . "
                                                                                                                                            sub_52e820(&var_24c, var_250)
                                                                                                                                            var_250 = edi_1
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_250) == 0)
                                                                                                                                                int32_t* var_238_175 = &var_1e0
                                                                                                                                                var_254 = u"#SAVE . CNT = %d"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                                    int32_t* var_238_177 = &var_1e0
                                                                                                                                                    var_254 = u"#QUICK_SAVE . CNT = %d"
                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                    var_254 = edi_1
                                                                                                                                                    
                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                        int32_t* var_238_179 = &var_1e0
                                                                                                                                                        var_254 = u"#END_SAVE . CNT = %d"
                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                        var_254 = edi_1
                                                                                                                                                        
                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                            int32_t* var_238_181 = &var_1e0
                                                                                                                                                            var_254 = u"#INNER_SAVE . CNT = %d"
                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                            var_254 = edi_1
                                                                                                                                                            
                                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                                int32_t* var_238_183 = &var_1e0
                                                                                                                                                                var_254 = #MESSAGE_BACK_SAVE . CNT = %d"
                                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                                var_254 = edi_1
                                                                                                                                                                
                                                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                                                    int32_t* var_238_185 = &var_1e0
                                                                                                                                                                    var_254 =
                                                                                                                                                                        #MESSAGE_BACK_SAVE . INTERVAL = %d"
                                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                                    var_254 = edi_1
                                                                                                                                                                    
                                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                                        int32_t* var_238_186 = &var_1e0
                                                                                                                                                                        var_254 = u"#SAVE_HISTORY . CNT = %d"
                                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                                        var_254 = edi_1
                                                                                                                                                                        
                                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                                            int32_t* var_238_188 = &var_1e0
                                                                                                                                                                            var_254 = u"#SEL_SAVE . CNT = %d"
                                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                                            var_254 = edi_1
                                                                                                                                                                            
                                                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                void** var_238_190 = &var_1a0
                                                                                                                                                                                var_254 = u"#SAVE . NO_DATA_STR = %s"
                                                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                                                var_254 = edi_1
                                                                                                                                                                                
                                                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                                                    var_238_10 = &var_1a0
                                                                                                                                                                                    ecx_11 = &arg1[0x42ea]
                                                                                                                                                                                    goto label_68e663
                                                                                                                                                                                
                                                                                                                                                                                var_250 = u"#SAVE_THUMB . "
                                                                                                                                                                                sub_52e820(&var_24c, var_250)
                                                                                                                                                                                var_250 = edi_1
                                                                                                                                                                                
                                                                                                                                                                                if (sub_6afb70(var_250) == 0)
                                                                                                                                                                                    int32_t* var_238_194 = &var_1dc
                                                                                                                                                                                    int32_t* var_23c_79 = &var_1e0
                                                                                                                                                                                    var_258 = u"#LOAD . WIPE = %d , %d"
                                                                                                                                                                                    sub_52e820(&var_254, var_258)
                                                                                                                                                                                    var_258 = edi_1
                                                                                                                                                                                    
                                                                                                                                                                                    if (sub_6afb70(var_258) == 0)
                                                                                                                                                                                        int32_t* var_238_195 = &var_1e0
                                                                                                                                                                                        var_254 = u"#CHRKOE . CNT = %d"
                                                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                                                        var_254 = edi_1
                                                                                                                                                                                        
                                                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                            void** var_238_197 = &var_1a0
                                                                                                                                                                                            var_254 =
                                                                                                                                                                                                #CHRKOE . NOT_LOOK_NAME_STR = %s"
                                                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                                                            var_254 = edi_1
                                                                                                                                                                                            
                                                                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                                                                ecx_11 = &arg1[0x40fd]
                                                                                                                                                                                                goto label_68e663
                                                                                                                                                                                            
                                                                                                                                                                                            void** var_238_198 = &var_188
                                                                                                                                                                                            int32_t* var_23c_81 = &var_1dc
                                                                                                                                                                                            void** var_240_64 = &var_1a0
                                                                                                                                                                                            int32_t* var_244_5 = &var_1e0
                                                                                                                                                                                            var_260 =
                                                                                                                                                                                                #CHRKOE . %d = %s , %d , %s , "
                                                                                                                                                                                            sub_52e820(&var_25c, var_260)
                                                                                                                                                                                            var_260 = edi_1
                                                                                                                                                                                            char eax_327
                                                                                                                                                                                            int32_t ecx_301
                                                                                                                                                                                            eax_327, ecx_301 =
                                                                                                                                                                                                sub_6afb70(var_260, var_25c)
                                                                                                                                                                                            
                                                                                                                                                                                            if (eax_327 == 0)
                                                                                                                                                                                                int32_t var_238_212 = ecx_301
                                                                                                                                                                                                ebx.b =
                                                                                                                                                                                                    std::tr2::sys::_Open_dir(arg1, edi_1)
                                                                                                                                                                                            else if (sub_696100(arg1, var_1e0, 
                                                                                                                                                                                                    arg1[0x40fc], 0x100) != 0)
                                                                                                                                                                                                int32_t eax_329 = var_1e0
                                                                                                                                                                                                sub_536260(
                                                                                                                                                                                                    &arg1[0x2efc + eax_329 * 0x12], 
                                                                                                                                                                                                    &var_1a0)
                                                                                                                                                                                                void* esi_12 = &arg1[eax_329 * 0x12]
                                                                                                                                                                                                *(esi_12 + 0xbc08) = var_1dc
                                                                                                                                                                                                sub_536260(esi_12 + 0xbc0c, &var_188)
                                                                                                                                                                                                char* var_238_202 = &var_1d4
                                                                                                                                                                                                char* var_23c_83 = &var_1d8
                                                                                                                                                                                                var_258 = u"%d , %d , "
                                                                                                                                                                                                sub_52e820(&var_254, var_258)
                                                                                                                                                                                                var_258 = edi_1
                                                                                                                                                                                                
                                                                                                                                                                                                if (sub_6afb70(var_258) != 0)
                                                                                                                                                                                                    int32_t ecx_307 = var_1d4.d
                                                                                                                                                                                                    *(esi_12 + 0xbc24) = var_1d8.d != 0
                                                                                                                                                                                                    
                                                                                                                                                                                                    if (ecx_307 s< 0)
                                                                                                                                                                                                        ecx_307 = 0
                                                                                                                                                                                                    else if (ecx_307 s> 0xff)
                                                                                                                                                                                                        ecx_307 = 0xff
                                                                                                                                                                                                    
                                                                                                                                                                                                    arg1[eax_329 * 0x12 + 0x2f0a] = ecx_307
                                                                                                                                                                                                
                                                                                                                                                                                                var_250 = &data_afdc34
                                                                                                                                                                                                sub_52e820(&var_24c, var_250)
                                                                                                                                                                                                var_250 = edi_1
                                                                                                                                                                                                void var_210
                                                                                                                                                                                                
                                                                                                                                                                                                if (sub_6afb70(var_250) == 0)
                                                                                                                                                                                                    sub_52e820(&var_210, &data_afdc6c)
                                                                                                                                                                                                    var_c_1.b = 3
                                                                                                                                                                                                    ebx.b = sub_696370(arg1, &var_210)
                                                                                                                                                                                                    sub_52e8a0(&var_210)
                                                                                                                                                                                                else
                                                                                                                                                                                                    int32_t esi_13 = 1
                                                                                                                                                                                                    
                                                                                                                                                                                                    while (true)
                                                                                                                                                                                                        int32_t* var_238_203 = &var_1e0
                                                                                                                                                                                                        var_254 = &data_afdc3c
                                                                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                                                                        var_254 = edi_1
                                                                                                                                                                                                        char eax_335
                                                                                                                                                                                                        int32_t ecx_310
                                                                                                                                                                                                        eax_335, ecx_310 = sub_6afb70(var_254)
                                                                                                                                                                                                        
                                                                                                                                                                                                        if (eax_335 == 0)
                                                                                                                                                                                                            int32_t var_238_207 = ecx_310
                                                                                                                                                                                                            void var_1f8
                                                                                                                                                                                                            void** eax_340 = sub_6ad9b0(&var_1f8)
                                                                                                                                                                                                            var_c_1.b = 1
                                                                                                                                                                                                            var_c_1.b = 2
                                                                                                                                                                                                            ebx.b = sub_696370(arg1, 
                                                                                                                                                                                                                sub_532b80(eax_340, eax_340, &var_210, 
                                                                                                                                                                                                                    &data_afdc44))
                                                                                                                                                                                                            sub_52e8a0(&var_210)
                                                                                                                                                                                                            sub_52e8a0(&var_1f8)
                                                                                                                                                                                                            goto label_68e67a
                                                                                                                                                                                                        
                                                                                                                                                                                                        int32_t edi_4 = (*(esi_12 + 0xbc30)
                                                                                                                                                                                                            - *(esi_12 + 0xbc2c)) s>> 2
                                                                                                                                                                                                        sub_55c6f0(esi_12 + 0xbc2c, edi_4 + 1)
                                                                                                                                                                                                        int16_t var_238_205 = 0x29
                                                                                                                                                                                                        *(*(esi_12 + 0xbc2c) + (edi_4 << 2)) =
                                                                                                                                                                                                            var_1e0
                                                                                                                                                                                                        edi_1 = arg2
                                                                                                                                                                                                        
                                                                                                                                                                                                        if (sub_6af7d0(edi_1, var_238_205) != 0)
                                                                                                                                                                                                            goto label_68e668_2
                                                                                                                                                                                                        
                                                                                                                                                                                                        if (sub_6af7d0(edi_1, 0x2c) == 0)
                                                                                                                                                                                                            break
                                                                                                                                                                                                        
                                                                                                                                                                                                        esi_13 += 1
                                                                                                                                                                                                    
                                                                                                                                                                                                    ebx.b = sub_6962d0(arg1)
                                                                                                                                                                                            else
                                                                                                                                                                                                ebx.b = 0
                                                                                                                                                                                        else if (
                                                                                                                                                                                                sub_695f30(arg1, var_1e0, 0, 0x100)
                                                                                                                                                                                                == 0)
                                                                                                                                                                                            ebx.b = 0
                                                                                                                                                                                        else
                                                                                                                                                                                            arg1[0x40fc] = var_1e0
                                                                                                                                                                                        labelid_1:
                                                                                                                                                                                            ebx.b = 1
                                                                                                                                                                                    else
                                                                                                                                                                                        arg1[0x42f4] = var_1e0
                                                                                                                                                                                        arg1[0x42f5] = var_1dc
                                                                                                                                                                                    labelid_1:
                                                                                                                                                                                        ebx.b = 1
                                                                                                                                                                                else
                                                                                                                                                                                    int32_t* var_238_191 = &var_1e0
                                                                                                                                                                                    var_254 = u"USE = %d"
                                                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                                                    var_254 = edi_1
                                                                                                                                                                                    
                                                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                        int32_t* var_238_192 = &var_1e0
                                                                                                                                                                                        var_254 = u"TYPE = %d"
                                                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                                                        var_254 = edi_1
                                                                                                                                                                                        
                                                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                            int32_t* var_238_193 = &var_1dc
                                                                                                                                                                                            int32_t* var_23c_78 = &var_1e0
                                                                                                                                                                                            var_258 = u"SIZE = %d , %d"
                                                                                                                                                                                            sub_52e820(&var_254, var_258)
                                                                                                                                                                                            var_258 = edi_1
                                                                                                                                                                                            
                                                                                                                                                                                            if (sub_6afb70(var_258) == 0)
                                                                                                                                                                                                ebx.b = sub_6962d0(arg1)
                                                                                                                                                                                            else
                                                                                                                                                                                                int32_t ecx_295 = var_1dc
                                                                                                                                                                                                arg1[0x42f2] = var_1e0
                                                                                                                                                                                                arg1[0x42f3] = ecx_295
                                                                                                                                                                                            labelid_1:
                                                                                                                                                                                                ebx.b = 1
                                                                                                                                                                                        else
                                                                                                                                                                                            arg1[0x42f1] = var_1e0
                                                                                                                                                                                        labelid_1:
                                                                                                                                                                                            ebx.b = 1
                                                                                                                                                                                    else
                                                                                                                                                                                        arg1[0x42f0].b = var_1e0 != 0
                                                                                                                                                                                    labelid_1:
                                                                                                                                                                                        ebx.b = 1
                                                                                                                                                                            else if (
                                                                                                                                                                                    sub_695f30(arg1, var_1e0, 1, 0x64) == 0)
                                                                                                                                                                                ebx.b = 0
                                                                                                                                                                            else
                                                                                                                                                                                arg1[0x42e9] = var_1e0
                                                                                                                                                                            labelid_1:
                                                                                                                                                                                ebx.b = 1
                                                                                                                                                                        else if (
                                                                                                                                                                                sub_695f30(arg1, var_1e0, 0, 0x2710)
                                                                                                                                                                                == 0)
                                                                                                                                                                            ebx.b = 0
                                                                                                                                                                        else
                                                                                                                                                                            arg1[0x42e6] = var_1e0
                                                                                                                                                                        labelid_1:
                                                                                                                                                                            ebx.b = 1
                                                                                                                                                                    else
                                                                                                                                                                        arg1[0x42e8] = var_1e0
                                                                                                                                                                    labelid_1:
                                                                                                                                                                        ebx.b = 1
                                                                                                                                                                else if (
                                                                                                                                                                        sub_695f30(arg1, var_1e0, 0, 0x2710)
                                                                                                                                                                        == 0)
                                                                                                                                                                    ebx.b = 0
                                                                                                                                                                else
                                                                                                                                                                    arg1[0x42e7] = var_1e0
                                                                                                                                                                labelid_1:
                                                                                                                                                                    ebx.b = 1
                                                                                                                                                            else if (
                                                                                                                                                                    sub_695f30(arg1, var_1e0, 0, 0x64) == 0)
                                                                                                                                                                ebx.b = 0
                                                                                                                                                            else
                                                                                                                                                                arg1[0x42e5] = var_1e0
                                                                                                                                                            labelid_1:
                                                                                                                                                                ebx.b = 1
                                                                                                                                                        else if (sub_695f30(arg1, var_1e0, 0, 1)
                                                                                                                                                                == 0)
                                                                                                                                                            ebx.b = 0
                                                                                                                                                        else
                                                                                                                                                            arg1[0x42e4] = var_1e0
                                                                                                                                                        labelid_1:
                                                                                                                                                            ebx.b = 1
                                                                                                                                                    else if (
                                                                                                                                                            sub_695f30(arg1, var_1e0, 0, 0x2710)
                                                                                                                                                            == 0)
                                                                                                                                                        ebx.b = 0
                                                                                                                                                    else
                                                                                                                                                        arg1[0x42e3] = var_1e0
                                                                                                                                                    labelid_1:
                                                                                                                                                        ebx.b = 1
                                                                                                                                                else if (
                                                                                                                                                        sub_695f30(arg1, var_1e0, 0, 0x2710)
                                                                                                                                                        == 0)
                                                                                                                                                    ebx.b = 0
                                                                                                                                                else
                                                                                                                                                    arg1[0x42e2] = var_1e0
                                                                                                                                                labelid_1:
                                                                                                                                                    ebx.b = 1
                                                                                                                                            else
                                                                                                                                                void** var_238_174 = &var_1a0
                                                                                                                                                var_254 = DLGWND_CAPTION_TITLE_STR = %s"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                    ecx_11 = &arg1[0x4294]
                                                                                                                                                    goto label_68e663
                                                                                                                                                
                                                                                                                                                var_254 = DLGWND_DESIDE_BUTTON_STR = %s"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                    ecx_11 = &arg1[0x429a]
                                                                                                                                                    goto label_68e663
                                                                                                                                                
                                                                                                                                                var_254 =
                                                                                                                                                    DLGWND_DATALIST_NAMEHEADER_STR = %s"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                    ecx_11 = &arg1[0x42a0]
                                                                                                                                                    goto label_68e663
                                                                                                                                                
                                                                                                                                                var_254 =
                                                                                                                                                    DLGWND_WARNING_CHKBOX_STR = %s"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                    ecx_11 = &arg1[0x42a6]
                                                                                                                                                    goto label_68e663
                                                                                                                                                
                                                                                                                                                var_254 =
                                                                                                                                                    DLGWND_DBLCLICK_CHKBOX_STR = %s"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                    ecx_11 = &arg1[0x42ac]
                                                                                                                                                    goto label_68e663
                                                                                                                                                
                                                                                                                                                var_254 = u"WARNING_STR = %s"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                    ecx_11 = &arg1[0x42b2]
                                                                                                                                                    goto label_68e663
                                                                                                                                                
                                                                                                                                                var_254 = u"QUICK_WARNING_STR = %s"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                    ecx_11 = &arg1[0x42b8]
                                                                                                                                                    goto label_68e663
                                                                                                                                                
                                                                                                                                                var_254 = u"MSGBK_WARNING_STR = %s"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                    var_238_10 = &var_1a0
                                                                                                                                                    ecx_11 = &arg1[0x42be]
                                                                                                                                                    goto label_68e663
                                                                                                                                                
                                                                                                                                                ebx.b = sub_6962d0(arg1)
                                                                                                                                        else
                                                                                                                                            void** var_238_173 = &var_1a0
                                                                                                                                            var_254 = DLGWND_CAPTION_TITLE_STR = %s"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                ecx_11 = &arg1[0x4264]
                                                                                                                                                goto label_68e663
                                                                                                                                            
                                                                                                                                            var_254 = DLGWND_DESIDE_BUTTON_STR = %s"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                ecx_11 = &arg1[0x426a]
                                                                                                                                                goto label_68e663
                                                                                                                                            
                                                                                                                                            var_254 =
                                                                                                                                                DLGWND_DATALIST_NAMEHEADER_STR = %s"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                ecx_11 = &arg1[0x4270]
                                                                                                                                                goto label_68e663
                                                                                                                                            
                                                                                                                                            var_254 =
                                                                                                                                                DLGWND_WARNING_CHKBOX_STR = %s"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                ecx_11 = &arg1[0x4276]
                                                                                                                                                goto label_68e663
                                                                                                                                            
                                                                                                                                            var_254 =
                                                                                                                                                DLGWND_DBLCLICK_CHKBOX_STR = %s"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                ecx_11 = &arg1[0x427c]
                                                                                                                                                goto label_68e663
                                                                                                                                            
                                                                                                                                            var_254 = u"WARNING_STR = %s"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                ecx_11 = &arg1[0x4282]
                                                                                                                                                goto label_68e663
                                                                                                                                            
                                                                                                                                            var_254 = u"QUICK_WARNING_STR = %s"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                ecx_11 = &arg1[0x4288]
                                                                                                                                                goto label_68e663
                                                                                                                                            
                                                                                                                                            var_254 = u"MSGBK_WARNING_STR = %s"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                ecx_11 = &arg1[0x428e]
                                                                                                                                                goto label_68e663
                                                                                                                                            
                                                                                                                                            ebx.b = sub_6962d0(arg1)
                                                                                                                                    else
                                                                                                                                        int32_t* var_238_171 = &var_1e0
                                                                                                                                        var_254 = u"DATA_CNT_PAR_PAGE = %d"
                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                        var_254 = edi_1
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                            ebx.b = sub_6962d0(arg1)
                                                                                                                                        else if (
                                                                                                                                                sub_695f30(arg1, var_1e0, 1, 0x3e8)
                                                                                                                                                == 0)
                                                                                                                                            ebx.b = 0
                                                                                                                                        else
                                                                                                                                            arg1[0x4263] = var_1e0
                                                                                                                                        labelid_1:
                                                                                                                                            ebx.b = 1
                                                                                                                                else
                                                                                                                                    void** var_238_170 = &var_1a0
                                                                                                                                    var_254 = u"RESTART_WARNING_STR = %s"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    var_238_10 = &var_1a0
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) != 0)
                                                                                                                                        ecx_11 = &arg1[0x42c4]
                                                                                                                                        goto label_68e663
                                                                                                                                    
                                                                                                                                    var_254 = u"SCENESTART_WARNING_STR = %s"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    var_238_10 = &var_1a0
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) != 0)
                                                                                                                                        ecx_11 = &arg1[0x42ca]
                                                                                                                                        goto label_68e663
                                                                                                                                    
                                                                                                                                    var_254 = u"RETURNMENU_WARNING_STR = %s"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    var_238_10 = &var_1a0
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) != 0)
                                                                                                                                        ecx_11 = &arg1[0x42d0]
                                                                                                                                        goto label_68e663
                                                                                                                                    
                                                                                                                                    var_254 = u"RETURNSEL_WARNING_STR = %s"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    var_238_10 = &var_1a0
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) != 0)
                                                                                                                                        ecx_11 = &arg1[0x42d6]
                                                                                                                                        goto label_68e663
                                                                                                                                    
                                                                                                                                    var_254 = u"GAMEEND_WARNING_STR = %s"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) != 0)
                                                                                                                                        var_238_10 = &var_1a0
                                                                                                                                        ecx_11 = &arg1[0x42dc]
                                                                                                                                        goto label_68e663
                                                                                                                                    
                                                                                                                                    ebx.b = sub_6962d0(arg1)
                                                                                                                            else
                                                                                                                                int32_t* var_238_136 = &var_1e0
                                                                                                                                var_254 = MESSAGE_CHRCOLOR . EXIST = %d"
                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                var_254 = edi_1
                                                                                                                                
                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                    void** var_238_137 = &var_1a0
                                                                                                                                    var_254 = u"MESSAGE_CHRCOLOR . STR = %s"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) != 0)
                                                                                                                                        var_238_10 = &var_1a0
                                                                                                                                        ecx_11 = &arg1[0x4104]
                                                                                                                                        goto label_68e663
                                                                                                                                    
                                                                                                                                    int32_t* var_238_138 = &var_1dc
                                                                                                                                    int32_t* var_23c_58 = &var_1e0
                                                                                                                                    var_258 = OBJECT_DISP . %d . EXIST = %d"
                                                                                                                                    sub_52e820(&var_254, var_258)
                                                                                                                                    var_258 = edi_1
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_258) == 0)
                                                                                                                                        void** var_238_140 = &var_1a0
                                                                                                                                        int32_t* var_23c_60 = &var_1e0
                                                                                                                                        var_258 = u"OBJECT_DISP . %d . STR = %s"
                                                                                                                                        sub_52e820(&var_254, var_258)
                                                                                                                                        var_258 = edi_1
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(var_258) == 0)
                                                                                                                                            int32_t* var_238_142 = &var_1dc
                                                                                                                                            int32_t* var_23c_62 = &var_1e0
                                                                                                                                            var_258 =
                                                                                                                                                GLOBAL_EXTRA_SWITCH . %d . EXIST = %d"
                                                                                                                                            sub_52e820(&var_254, var_258)
                                                                                                                                            var_258 = edi_1
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_258) == 0)
                                                                                                                                                void** var_238_144 = &var_1a0
                                                                                                                                                int32_t* var_23c_64 = &var_1e0
                                                                                                                                                var_258 =
                                                                                                                                                    GLOBAL_EXTRA_SWITCH . %d . STR = %s"
                                                                                                                                                sub_52e820(&var_254, var_258)
                                                                                                                                                var_258 = edi_1
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_258) == 0)
                                                                                                                                                    int32_t* var_238_146 = &var_1e0
                                                                                                                                                    var_254 = u"GLOBAL_EXTRA_MODE . %d . "
                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                    var_254 = edi_1
                                                                                                                                                    
                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                        int32_t* var_238_154 = &var_1e0
                                                                                                                                                        var_254 = u"SLEEP . EXIST = %d"
                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                        var_254 = edi_1
                                                                                                                                                        
                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                            void** var_238_155 = &var_1a0
                                                                                                                                                            var_254 = u"SLEEP . STR = %s"
                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                            var_254 = edi_1
                                                                                                                                                            
                                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                                ecx_11 = &arg1[0x422a]
                                                                                                                                                                goto label_68e663
                                                                                                                                                            
                                                                                                                                                            int32_t* var_238_156 = &var_1e0
                                                                                                                                                            var_254 = u"NO_WIPE_ANIME . EXIST = %d"
                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                            var_254 = edi_1
                                                                                                                                                            
                                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                                void** var_238_157 = &var_1a0
                                                                                                                                                                var_254 = u"NO_WIPE_ANIME . STR = %s"
                                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                                var_254 = edi_1
                                                                                                                                                                
                                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                                    var_238_10 = &var_1a0
                                                                                                                                                                    ecx_11 = &arg1[0x4231]
                                                                                                                                                                    goto label_68e663
                                                                                                                                                                
                                                                                                                                                                int32_t* var_238_158 = &var_1e0
                                                                                                                                                                var_254 = SKIP_WIPE_ANIME . EXIST = %d"
                                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                                var_254 = edi_1
                                                                                                                                                                
                                                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                                                    void** var_238_159 = &var_1a0
                                                                                                                                                                    var_254 = u"SKIP_WIPE_ANIME . STR = %s"
                                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                                    var_254 = edi_1
                                                                                                                                                                    
                                                                                                                                                                    if (sub_6afb70(var_254) != 0)
                                                                                                                                                                        var_238_10 = &var_1a0
                                                                                                                                                                        ecx_11 = &arg1[0x4238]
                                                                                                                                                                        goto label_68e663
                                                                                                                                                                    
                                                                                                                                                                    int32_t* var_238_160 = &var_1e0
                                                                                                                                                                    var_254 = u"NO_MWND_ANIME . EXIST = %d"
                                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                                    var_254 = edi_1
                                                                                                                                                                    
                                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                                        void** var_238_161 = &var_1a0
                                                                                                                                                                        var_254 = u"NO_MWND_ANIME . STR = %s"
                                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                                        var_254 = edi_1
                                                                                                                                                                        
                                                                                                                                                                        if (sub_6afb70(var_254) != 0)
                                                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                                                            ecx_11 = &arg1[0x423f]
                                                                                                                                                                            goto label_68e663
                                                                                                                                                                        
                                                                                                                                                                        int32_t* var_238_162 = &var_1e0
                                                                                                                                                                        var_254 =
                                                                                                                                                                            WHEEL_NEXT_MESSAGE . EXIST = %d"
                                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                                        var_254 = edi_1
                                                                                                                                                                        
                                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                                            void** var_238_163 = &var_1a0
                                                                                                                                                                            var_254 = WHEEL_NEXT_MESSAGE . STR = %s"
                                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                                            var_254 = edi_1
                                                                                                                                                                            
                                                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                                                ecx_11 = &arg1[0x4246]
                                                                                                                                                                                goto label_68e663
                                                                                                                                                                            
                                                                                                                                                                            int32_t* var_238_164 = &var_1e0
                                                                                                                                                                            var_254 = u"KOE_DONT_STOP . EXIST = %d"
                                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                                            var_254 = edi_1
                                                                                                                                                                            
                                                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                void** var_238_165 = &var_1a0
                                                                                                                                                                                var_254 = u"KOE_DONT_STOP . STR = %s"
                                                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                                                var_254 = edi_1
                                                                                                                                                                                
                                                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                                                    var_238_10 = &var_1a0
                                                                                                                                                                                    ecx_11 = &arg1[0x424d]
                                                                                                                                                                                    goto label_68e663
                                                                                                                                                                                
                                                                                                                                                                                int32_t* var_238_166 = &var_1e0
                                                                                                                                                                                var_254 =
                                                                                                                                                                                    SKIP_UNREAD_MESSAGE . EXIST = %d"
                                                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                                                var_254 = edi_1
                                                                                                                                                                                
                                                                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                    void** var_238_167 = &var_1a0
                                                                                                                                                                                    var_254 =
                                                                                                                                                                                        SKIP_UNREAD_MESSAGE . STR = %s"
                                                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                                                    var_254 = edi_1
                                                                                                                                                                                    
                                                                                                                                                                                    if (sub_6afb70(var_254) != 0)
                                                                                                                                                                                        var_238_10 = &var_1a0
                                                                                                                                                                                        ecx_11 = &arg1[0x4254]
                                                                                                                                                                                        goto label_68e663
                                                                                                                                                                                    
                                                                                                                                                                                    int32_t* var_238_168 = &var_1e0
                                                                                                                                                                                    var_254 =
                                                                                                                                                                                        PLAY_SILENT_SOUND . EXIST = %d"
                                                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                                                    var_254 = edi_1
                                                                                                                                                                                    
                                                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                        void** var_238_169 = &var_1a0
                                                                                                                                                                                        var_254 = PLAY_SILENT_SOUND . STR = %s"
                                                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                                                        var_254 = edi_1
                                                                                                                                                                                        
                                                                                                                                                                                        if (sub_6afb70(var_254) != 0)
                                                                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                                                                            ecx_11 = &arg1[0x425b]
                                                                                                                                                                                            goto label_68e663
                                                                                                                                                                                        
                                                                                                                                                                                        ebx.b = sub_6962d0(arg1)
                                                                                                                                                                                    else
                                                                                                                                                                                        arg1[0x425a].b = var_1e0 != 0
                                                                                                                                                                                    labelid_1:
                                                                                                                                                                                        ebx.b = 1
                                                                                                                                                                                else
                                                                                                                                                                                    arg1[0x4253].b = var_1e0 != 0
                                                                                                                                                                                labelid_1:
                                                                                                                                                                                    ebx.b = 1
                                                                                                                                                                            else
                                                                                                                                                                                arg1[0x424c].b = var_1e0 != 0
                                                                                                                                                                            labelid_1:
                                                                                                                                                                                ebx.b = 1
                                                                                                                                                                        else
                                                                                                                                                                            arg1[0x4245].b = var_1e0 != 0
                                                                                                                                                                        labelid_1:
                                                                                                                                                                            ebx.b = 1
                                                                                                                                                                    else
                                                                                                                                                                        arg1[0x423e].b = var_1e0 != 0
                                                                                                                                                                    labelid_1:
                                                                                                                                                                        ebx.b = 1
                                                                                                                                                                else
                                                                                                                                                                    arg1[0x4237].b = var_1e0 != 0
                                                                                                                                                                labelid_1:
                                                                                                                                                                    ebx.b = 1
                                                                                                                                                            else
                                                                                                                                                                arg1[0x4230].b = var_1e0 != 0
                                                                                                                                                            labelid_1:
                                                                                                                                                                ebx.b = 1
                                                                                                                                                        else
                                                                                                                                                            arg1[0x4229].b = var_1e0 != 0
                                                                                                                                                        labelid_1:
                                                                                                                                                            ebx.b = 1
                                                                                                                                                    else if (sub_696100(arg1, var_1e0, 
                                                                                                                                                            arg1[0x4144], 4) == 0)
                                                                                                                                                        ebx.b = 0
                                                                                                                                                    else
                                                                                                                                                        int32_t esi_9 = var_1e0
                                                                                                                                                        int32_t* var_238_148 = &var_1e0
                                                                                                                                                        var_254 = u"EXIST = %d"
                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                        var_254 = edi_1
                                                                                                                                                        
                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                            void** var_238_149 = &var_1a0
                                                                                                                                                            var_254 = u"STR = %s"
                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                            var_254 = edi_1
                                                                                                                                                            
                                                                                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                                ecx_11 = &arg1[0x4146 + esi_9 * 0x39]
                                                                                                                                                                goto label_68e663
                                                                                                                                                            
                                                                                                                                                            int32_t* var_238_150 = &var_1e0
                                                                                                                                                            var_254 = u"ITEM_CNT = %d"
                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                            var_254 = edi_1
                                                                                                                                                            
                                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                                void** var_238_152 = &var_1a0
                                                                                                                                                                int32_t* var_23c_68 = &var_1e0
                                                                                                                                                                var_258 = u"ITEM . %d . STR = %s"
                                                                                                                                                                sub_52e820(&var_254, var_258)
                                                                                                                                                                var_258 = edi_1
                                                                                                                                                                
                                                                                                                                                                if (sub_6afb70(var_258) == 0)
                                                                                                                                                                    ebx.b = sub_6962d0(arg1)
                                                                                                                                                                else
                                                                                                                                                                    if (sub_696100(arg1, var_1e0, 8, 8)
                                                                                                                                                                            != 0)
                                                                                                                                                                        var_238_10 = &var_1a0
                                                                                                                                                                        ecx_11 = esi_9 * 0xe4 + arg1
                                                                                                                                                                            + var_1e0 * 0x18 + 0x10538
                                                                                                                                                                        goto label_68e663
                                                                                                                                                                    
                                                                                                                                                                    ebx.b = 0
                                                                                                                                                            else if (sub_695f30(arg1, var_1e0, 0, 8)
                                                                                                                                                                    == 0)
                                                                                                                                                                ebx.b = 0
                                                                                                                                                            else
                                                                                                                                                                arg1[esi_9 * 0x39 + 0x414d] = var_1e0
                                                                                                                                                            labelid_1:
                                                                                                                                                                ebx.b = 1
                                                                                                                                                        else
                                                                                                                                                            arg1[esi_9 * 0x39 + 0x4145].b =
                                                                                                                                                                var_1e0 != 0
                                                                                                                                                        labelid_1:
                                                                                                                                                            ebx.b = 1
                                                                                                                                                else
                                                                                                                                                    if (sub_696100(arg1, var_1e0, 
                                                                                                                                                            arg1[0x4127], 4) != 0)
                                                                                                                                                        var_238_10 = &var_1a0
                                                                                                                                                        ecx_11 = &arg1[(var_1e0 + 0x94f) * 7]
                                                                                                                                                        goto label_68e663
                                                                                                                                                    
                                                                                                                                                    ebx.b = 0
                                                                                                                                            else if (sub_696100(arg1, var_1e0, 
                                                                                                                                                    arg1[0x4127], 4) == 0)
                                                                                                                                                ebx.b = 0
                                                                                                                                            else
                                                                                                                                                arg1[var_1e0 * 7 + 0x4128].b =
                                                                                                                                                    var_1dc != 0
                                                                                                                                            labelid_1:
                                                                                                                                                ebx.b = 1
                                                                                                                                        else
                                                                                                                                            if (sub_696100(arg1, var_1e0, 
                                                                                                                                                    arg1[0x410a], 4) != 0)
                                                                                                                                                var_238_10 = &var_1a0
                                                                                                                                                ecx_11 = &arg1[var_1e0 * 7 + 0x410c]
                                                                                                                                                goto label_68e663
                                                                                                                                            
                                                                                                                                            ebx.b = 0
                                                                                                                                    else if (sub_696100(arg1, var_1e0, 
                                                                                                                                            arg1[0x410a], 4) == 0)
                                                                                                                                        ebx.b = 0
                                                                                                                                    else
                                                                                                                                        arg1[var_1e0 * 7 + 0x410b].b =
                                                                                                                                            var_1dc != 0
                                                                                                                                    labelid_1:
                                                                                                                                        ebx.b = 1
                                                                                                                                else
                                                                                                                                    arg1[0x4103].b = var_1e0 != 0
                                                                                                                                labelid_1:
                                                                                                                                    ebx.b = 1
                                                                                                                        else
                                                                                                                            int32_t* var_238_131 = &var_1e0
                                                                                                                            var_254 = u"BGM = %d"
                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                            var_254 = edi_1
                                                                                                                            
                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                int32_t* var_238_132 = &var_1e0
                                                                                                                                var_254 = u"KOE = %d"
                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                var_254 = edi_1
                                                                                                                                
                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                    int32_t* var_238_133 = &var_1e0
                                                                                                                                    var_254 = u"PCM = %d"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                        int32_t* var_238_134 = &var_1e0
                                                                                                                                        var_254 = u"SE = %d"
                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                        var_254 = edi_1
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                            int32_t* var_238_135 = &var_1e0
                                                                                                                                            var_254 = u"MOVIE = %d"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                ebx.b = sub_6962d0(arg1)
                                                                                                                                            else
                                                                                                                                                *(arg1 + 0xbb55) = var_1e0 != 0
                                                                                                                                            labelid_1:
                                                                                                                                                ebx.b = 1
                                                                                                                                        else
                                                                                                                                            arg1[0x2ed5].b = var_1e0 != 0
                                                                                                                                        labelid_1:
                                                                                                                                            ebx.b = 1
                                                                                                                                    else
                                                                                                                                        *(arg1 + 0xbb53) = var_1e0 != 0
                                                                                                                                    labelid_1:
                                                                                                                                        ebx.b = 1
                                                                                                                                else
                                                                                                                                    *(arg1 + 0xbb52) = var_1e0 != 0
                                                                                                                                labelid_1:
                                                                                                                                    ebx.b = 1
                                                                                                                            else
                                                                                                                                *(arg1 + 0xbb51) = var_1e0 != 0
                                                                                                                            labelid_1:
                                                                                                                                ebx.b = 1
                                                                                                                    else
                                                                                                                        int32_t* var_238_122 = &var_1e0
                                                                                                                        var_254 = u"SCREEN = %d"
                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                        var_254 = edi_1
                                                                                                                        
                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                            int32_t* var_238_123 = &var_1e0
                                                                                                                            var_254 = u"VOLUME = %d"
                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                            var_254 = edi_1
                                                                                                                            
                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                int32_t* var_238_124 = &var_1e0
                                                                                                                                var_254 = u"MESSAGE = %d"
                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                var_254 = edi_1
                                                                                                                                
                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                    int32_t* var_238_125 = &var_1e0
                                                                                                                                    var_254 = u"MWNDBK = %d"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                        int32_t* var_238_126 = &var_1e0
                                                                                                                                        var_254 = u"KOE = %d"
                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                        var_254 = edi_1
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                            int32_t* var_238_127 = &var_1e0
                                                                                                                                            var_254 = u"AUTOMODE = %d"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                int32_t* var_238_128 = &var_1e0
                                                                                                                                                var_254 = u"JITAN = %d"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                                    int32_t* var_238_129 = &var_1e0
                                                                                                                                                    var_254 = u"ELSE = %d"
                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                    var_254 = edi_1
                                                                                                                                                    
                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                        int32_t* var_238_130 = &var_1e0
                                                                                                                                                        var_254 = u"SYSTEM = %d"
                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                        var_254 = edi_1
                                                                                                                                                        
                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                            ebx.b = sub_6962d0(arg1)
                                                                                                                                                        else
                                                                                                                                                            arg1[0x2ed4].b = var_1e0 != 0
                                                                                                                                                        labelid_1:
                                                                                                                                                            ebx.b = 1
                                                                                                                                                    else
                                                                                                                                                        *(arg1 + 0xbb4f) = var_1e0 != 0
                                                                                                                                                    labelid_1:
                                                                                                                                                        ebx.b = 1
                                                                                                                                                else
                                                                                                                                                    *(arg1 + 0xbb4e) = var_1e0 != 0
                                                                                                                                                labelid_1:
                                                                                                                                                    ebx.b = 1
                                                                                                                                            else
                                                                                                                                                *(arg1 + 0xbb4d) = var_1e0 != 0
                                                                                                                                            labelid_1:
                                                                                                                                                ebx.b = 1
                                                                                                                                        else
                                                                                                                                            arg1[0x2ed3].b = var_1e0 != 0
                                                                                                                                        labelid_1:
                                                                                                                                            ebx.b = 1
                                                                                                                                    else
                                                                                                                                        *(arg1 + 0xbb4b) = var_1e0 != 0
                                                                                                                                    labelid_1:
                                                                                                                                        ebx.b = 1
                                                                                                                                else
                                                                                                                                    *(arg1 + 0xbb4a) = var_1e0 != 0
                                                                                                                                labelid_1:
                                                                                                                                    ebx.b = 1
                                                                                                                            else
                                                                                                                                *(arg1 + 0xbb49) = var_1e0 != 0
                                                                                                                            labelid_1:
                                                                                                                                ebx.b = 1
                                                                                                                        else
                                                                                                                            arg1[0x2ed2].b = var_1e0 != 0
                                                                                                                        labelid_1:
                                                                                                                            ebx.b = 1
                                                                                                                else
                                                                                                                    int32_t* var_238_120 = &var_1e0
                                                                                                                    var_254 = u"VOLUME = %d"
                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                    var_254 = edi_1
                                                                                                                    
                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                        int32_t* var_238_121 = &var_1e0
                                                                                                                        var_254 = u"KOE = %d"
                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                        var_254 = edi_1
                                                                                                                        
                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                            ebx.b = sub_6962d0(arg1)
                                                                                                                        else
                                                                                                                            arg1[0x2ed1] = var_1e0
                                                                                                                        labelid_1:
                                                                                                                            ebx.b = 1
                                                                                                                    else
                                                                                                                        arg1[0x2ed0] = var_1e0
                                                                                                                    labelid_1:
                                                                                                                        ebx.b = 1
                                                                                                            else
                                                                                                                void** var_238_95 = &var_1a0
                                                                                                                int32_t* var_23c_35 = &var_1dc
                                                                                                                int32_t* var_240_26 = &var_1e0
                                                                                                                var_25c = u"READ_SKIP = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c, var_258) != 0)
                                                                                                                    ecx_11 = &arg1[0x2d66]
                                                                                                                    arg1[0x2d65].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb595) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_96 = &var_1a0
                                                                                                                int32_t* var_23c_36 = &var_1dc
                                                                                                                int32_t* var_240_27 = &var_1e0
                                                                                                                var_25c = u"UNREAD_SKIP = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2d6d]
                                                                                                                    arg1[0x2d6c].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb5b1) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_97 = &var_1a0
                                                                                                                int32_t* var_23c_37 = &var_1dc
                                                                                                                int32_t* var_240_28 = &var_1e0
                                                                                                                var_25c = u"AUTO_SKIP = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2d74]
                                                                                                                    arg1[0x2d73].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb5cd) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_98 = &var_1a0
                                                                                                                int32_t* var_23c_38 = &var_1dc
                                                                                                                int32_t* var_240_29 = &var_1e0
                                                                                                                var_25c = u"AUTO_MODE = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2d7b]
                                                                                                                    arg1[0x2d7a].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb5e9) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_99 = &var_1a0
                                                                                                                int32_t* var_23c_39 = &var_1dc
                                                                                                                int32_t* var_240_30 = &var_1e0
                                                                                                                var_25c = u"HIDE_MWND = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2d82]
                                                                                                                    arg1[0x2d81].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb605) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_100 = &var_1a0
                                                                                                                int32_t* var_23c_40 = &var_1dc
                                                                                                                int32_t* var_240_31 = &var_1e0
                                                                                                                var_25c = u"MSG_BACK = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2d89]
                                                                                                                    arg1[0x2d88].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb621) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_101 = &var_1a0
                                                                                                                int32_t* var_23c_41 = &var_1dc
                                                                                                                int32_t* var_240_32 = &var_1e0
                                                                                                                var_25c = u"SAVE = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2d90]
                                                                                                                    arg1[0x2d8f].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb63d) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_102 = &var_1a0
                                                                                                                int32_t* var_23c_42 = &var_1dc
                                                                                                                int32_t* var_240_33 = &var_1e0
                                                                                                                var_25c = u"LOAD = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2d97]
                                                                                                                    arg1[0x2d96].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb659) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_103 = &var_1a0
                                                                                                                int32_t* var_23c_43 = &var_1dc
                                                                                                                int32_t* var_240_34 = &var_1e0
                                                                                                                var_25c = u"RETURN_SEL = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2d9e]
                                                                                                                    arg1[0x2d9d].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb675) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_104 = &var_1a0
                                                                                                                int32_t* var_23c_44 = &var_1dc
                                                                                                                int32_t* var_240_35 = &var_1e0
                                                                                                                var_25c = u"CONFIG = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2da5]
                                                                                                                    arg1[0x2da4].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb691) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_105 = &var_1a0
                                                                                                                int32_t* var_23c_45 = &var_1dc
                                                                                                                int32_t* var_240_36 = &var_1e0
                                                                                                                var_25c = u"MANUAL = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2dac]
                                                                                                                    arg1[0x2dab].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb6ad) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_106 = &var_1a0
                                                                                                                int32_t* var_23c_46 = &var_1dc
                                                                                                                int32_t* var_240_37 = &var_1e0
                                                                                                                var_25c = u"VERSION = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2db3]
                                                                                                                    arg1[0x2db2].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb6c9) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_107 = &var_1a0
                                                                                                                int32_t* var_23c_47 = &var_1dc
                                                                                                                int32_t* var_240_38 = &var_1e0
                                                                                                                var_25c = u"RETURN_MENU = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2dba]
                                                                                                                    arg1[0x2db9].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb6e5) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_108 = &var_1a0
                                                                                                                int32_t* var_23c_48 = &var_1dc
                                                                                                                int32_t* var_240_39 = &var_1e0
                                                                                                                var_25c = u"GAME_END = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2dc1]
                                                                                                                    arg1[0x2dc0].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb701) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_109 = &var_1a0
                                                                                                                int32_t* var_23c_49 = &var_1dc
                                                                                                                int32_t* var_240_40 = &var_1e0
                                                                                                                var_25c = u"CANCEL = %d , %d , %s"
                                                                                                                sub_52e820(&var_258, var_25c)
                                                                                                                var_25c = edi_1
                                                                                                                
                                                                                                                if (sub_6afb70(var_25c) != 0)
                                                                                                                    ecx_11 = &arg1[0x2dc8]
                                                                                                                    arg1[0x2dc7].b = var_1e0 != 0
                                                                                                                    *(arg1 + 0xb71d) = var_1dc != 0
                                                                                                                    var_238_10 = &var_1a0
                                                                                                                    goto label_68e663
                                                                                                                
                                                                                                                void** var_238_110 = &var_1a0
                                                                                                                char* var_23c_50 = &var_1d4
                                                                                                                char* var_240_41 = &var_1d8
                                                                                                                int32_t* var_244_3 = &var_1dc
                                                                                                                int32_t* var_248_1 = &var_1e0
                                                                                                                sub_52e820(&var_260, 
                                                                                                                    LOCAL_EXTRA_SWITCH . %d = %d , %d , %d , "
                                                                                                                "
                                                                                                                
                                                                                                                if (sub_6afb70(edi_1, var_260) == 0)
                                                                                                                    void** var_238_112 = &var_1a0
                                                                                                                    char* var_23c_52 = &var_1d4
                                                                                                                    char* var_240_43 = &var_1d8
                                                                                                                    int32_t* var_244_4 = &var_1dc
                                                                                                                    int32_t* var_248_2 = &var_1e0
                                                                                                                    sub_52e820(&var_260, 
                                                                                                                        LOCAL_EXTRA_MODE . %d = %d , %d , %d , "
                                                                                                                    "
                                                                                                                    
                                                                                                                    if (sub_6afb70(edi_1) == 0)
                                                                                                                        int32_t* var_238_114 = &var_1e0
                                                                                                                        var_254 = u"LOCAL_EXTRA_MODE . %d . "
                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                        var_254 = edi_1
                                                                                                                        
                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                            ebx.b = sub_6962d0(arg1)
                                                                                                                        else if (sub_696100(arg1, var_1e0, 
                                                                                                                                arg1[0x2deb], 4) == 0)
                                                                                                                            ebx.b = 0
                                                                                                                        else
                                                                                                                            int32_t esi_8 = var_1e0
                                                                                                                            int32_t* var_238_116 = &var_1e0
                                                                                                                            var_254 = u"ITEM_CNT = %d"
                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                            var_254 = edi_1
                                                                                                                            
                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                void** var_238_118 = &var_1a0
                                                                                                                                int32_t* var_23c_56 = &var_1e0
                                                                                                                                var_258 = u"ITEM . %d . STR = %s"
                                                                                                                                sub_52e820(&var_254, var_258)
                                                                                                                                var_258 = edi_1
                                                                                                                                
                                                                                                                                if (sub_6afb70(var_258) == 0)
                                                                                                                                    ebx.b = sub_6962d0(arg1)
                                                                                                                                else
                                                                                                                                    if (sub_696100(arg1, var_1e0, 8, 8)
                                                                                                                                            != 0)
                                                                                                                                        var_238_10 = &var_1a0
                                                                                                                                        ecx_11 = esi_8 * 0xe4 + arg1
                                                                                                                                            + var_1e0 * 0x18 + 0xb7d4
                                                                                                                                        goto label_68e663
                                                                                                                                    
                                                                                                                                    ebx.b = 0
                                                                                                                            else if (sub_695f30(arg1, var_1e0, 0, 8)
                                                                                                                                    == 0)
                                                                                                                                ebx.b = 0
                                                                                                                            else
                                                                                                                                arg1[esi_8 * 0x39 + 0x2df4] = var_1e0
                                                                                                                            labelid_1:
                                                                                                                                ebx.b = 1
                                                                                                                    else
                                                                                                                        if (sub_696100(arg1, var_1e0, 
                                                                                                                                arg1[0x2deb], 4) != 0)
                                                                                                                            arg1[var_1e0 * 0x39 + 0x2dec].b =
                                                                                                                                var_1dc != 0
                                                                                                                            *(&arg1[var_1e0 * 0x39] + 0xb7b1) =
                                                                                                                                var_1d8.d != 0
                                                                                                                            arg1[var_1e0 * 0x39 + 0x2ded] =
                                                                                                                                var_1d4.d
                                                                                                                            var_238_10 = &var_1a0
                                                                                                                            ecx_46 = var_1e0 * 0xe4 + 0xb7b8
                                                                                                                            goto label_68e661
                                                                                                                        
                                                                                                                        ebx.b = 0
                                                                                                                else
                                                                                                                    if (sub_696100(arg1, var_1e0, 
                                                                                                                            arg1[0x2dce], 4) != 0)
                                                                                                                        arg1[var_1e0 * 7 + 0x2dcf].b =
                                                                                                                            var_1dc != 0
                                                                                                                        *(&arg1[var_1e0 * 7] + 0xb73d) =
                                                                                                                            var_1d8.d != 0
                                                                                                                        var_238_10 = &var_1a0
                                                                                                                        *(&arg1[var_1e0 * 7] + 0xb73e) =
                                                                                                                            var_1d4.d != 0
                                                                                                                        ecx_11 = &arg1[var_1e0 * 7 + 0x2dd0]
                                                                                                                        goto label_68e663
                                                                                                                    
                                                                                                                    ebx.b = 0
                                                                                                        else
                                                                                                            int32_t* var_238_64 = &var_1e0
                                                                                                            var_254 = u"WINDOW_MODE = %d"
                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                            var_254 = edi_1
                                                                                                            
                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                var_250 = u"VOLUME . "
                                                                                                                sub_52e820(&var_24c, var_250)
                                                                                                                var_250 = edi_1
                                                                                                                int32_t* var_238_65 = &var_1e0
                                                                                                                
                                                                                                                if (sub_6afb70(var_250) == 0)
                                                                                                                    var_254 = u"BGMFADE_VOLUME = %d"
                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                    var_254 = edi_1
                                                                                                                    
                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                        int32_t* var_238_71 = &var_1e0
                                                                                                                        var_254 = u"BGMFADE_ONOFF = %d"
                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                        var_254 = edi_1
                                                                                                                        
                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                            char* var_238_72 = &var_1d4
                                                                                                                            char* var_23c_28 = &var_1d8
                                                                                                                            int32_t* var_240_22 = &var_1dc
                                                                                                                            int32_t* var_244_2 = &var_1e0
                                                                                                                            var_260 =
                                                                                                                                FILTER_COLOR = %d , %d , %d , %d"
                                                                                                                            sub_52e820(&var_25c, var_260)
                                                                                                                            var_260 = edi_1
                                                                                                                            
                                                                                                                            if (sub_6afb70(var_260, var_25c) == 0)
                                                                                                                                var_250 = u"FONT . "
                                                                                                                                sub_52e820(&var_24c, var_250)
                                                                                                                                var_250 = edi_1
                                                                                                                                int32_t* var_238_73 = &var_1e0
                                                                                                                                
                                                                                                                                if (sub_6afb70(var_250) == 0)
                                                                                                                                    var_254 = u"MESSAGE_SPEED = %d"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                        int32_t* var_238_77 = &var_1e0
                                                                                                                                        var_254 =
                                                                                                                                            MESSAGE_SPEED_NOWAIT . ONOFF = %d"
                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                        var_254 = edi_1
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                            int32_t* var_238_78 = &var_1e0
                                                                                                                                            var_254 = MESSAGE_CHRCOLOR . ONOFF = %d"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                int32_t* var_238_79 = &var_1e0
                                                                                                                                                var_254 = MOUSE_CURSOR_HIDE_ONOFF = %d"
                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                var_254 = edi_1
                                                                                                                                                
                                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                                    int32_t* var_238_80 = &var_1e0
                                                                                                                                                    var_254 = u"MOUSE_CURSOR_HIDE_TIME = %d"
                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                    var_254 = edi_1
                                                                                                                                                    
                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                        int32_t* var_238_81 = &var_1dc
                                                                                                                                                        int32_t* var_23c_29 = &var_1e0
                                                                                                                                                        var_258 = OBJECT_DISP . %d . ONOFF = %d"
                                                                                                                                                        sub_52e820(&var_254, var_258)
                                                                                                                                                        var_258 = edi_1
                                                                                                                                                        
                                                                                                                                                        if (sub_6afb70(var_258) == 0)
                                                                                                                                                            int32_t* var_238_83 = &var_1dc
                                                                                                                                                            int32_t* var_23c_31 = &var_1e0
                                                                                                                                                            var_258 =
                                                                                                                                                                GLOBAL_EXTRA_SWITCH . %d . ONOFF = %d"
                                                                                                                                                            sub_52e820(&var_254, var_258)
                                                                                                                                                            var_258 = edi_1
                                                                                                                                                            
                                                                                                                                                            if (sub_6afb70(var_258) == 0)
                                                                                                                                                                int32_t* var_238_85 = &var_1dc
                                                                                                                                                                int32_t* var_23c_33 = &var_1e0
                                                                                                                                                                var_258 =
                                                                                                                                                                    GLOBAL_EXTRA_MODE . %d . MODE = %d"
                                                                                                                                                                sub_52e820(&var_254, var_258)
                                                                                                                                                                var_258 = edi_1
                                                                                                                                                                
                                                                                                                                                                if (sub_6afb70(var_258) == 0)
                                                                                                                                                                    int32_t* var_238_87 = &var_1e0
                                                                                                                                                                    var_254 = u"SLEEP . ONOFF = %d"
                                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                                    var_254 = edi_1
                                                                                                                                                                    
                                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                                        int32_t* var_238_88 = &var_1e0
                                                                                                                                                                        var_254 = u"NO_WIPE_ANIME . ONOFF = %d"
                                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                                        var_254 = edi_1
                                                                                                                                                                        
                                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                                            int32_t* var_238_89 = &var_1e0
                                                                                                                                                                            var_254 = SKIP_WIPE_ANIME . ONOFF = %d"
                                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                                            var_254 = edi_1
                                                                                                                                                                            
                                                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                int32_t* var_238_90 = &var_1e0
                                                                                                                                                                                var_254 = u"NO_MWND_ANIME . ONOFF = %d"
                                                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                                                var_254 = edi_1
                                                                                                                                                                                
                                                                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                    int32_t* var_238_91 = &var_1e0
                                                                                                                                                                                    var_254 =
                                                                                                                                                                                        WHEEL_NEXT_MESSAGE . ONOFF = %d"
                                                                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                                                                    var_254 = edi_1
                                                                                                                                                                                    
                                                                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                        int32_t* var_238_92 = &var_1e0
                                                                                                                                                                                        var_254 = u"KOE_DONT_STOP . ONOFF = %d"
                                                                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                                                                        var_254 = edi_1
                                                                                                                                                                                        
                                                                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                            int32_t* var_238_93 = &var_1e0
                                                                                                                                                                                            var_254 =
                                                                                                                                                                                                SKIP_UNREAD_MESSAGE . ONOFF = %d"
                                                                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                                                                            var_254 = edi_1
                                                                                                                                                                                            
                                                                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                                                                int32_t* var_238_94 = &var_1e0
                                                                                                                                                                                                var_254 =
                                                                                                                                                                                                    PLAY_SILENT_SOUND . ONOFF = %d"
                                                                                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                                                                                var_254 = edi_1
                                                                                                                                                                                                
                                                                                                                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                                                                                                                labelid_1:
                                                                                                                                                                                                    ebx.b = 1
                                                                                                                                                                                                else
                                                                                                                                                                                                    ebx.b = sub_6962d0(arg1)
                                                                                                                                                                                            else
                                                                                                                                                                                                *(arg1 + 0x1094d) = var_1e0 != 0
                                                                                                                                                                                            labelid_1:
                                                                                                                                                                                                ebx.b = 1
                                                                                                                                                                                        else
                                                                                                                                                                                            *(arg1 + 0x10931) = var_1e0 != 0
                                                                                                                                                                                        labelid_1:
                                                                                                                                                                                            ebx.b = 1
                                                                                                                                                                                    else
                                                                                                                                                                                        *(arg1 + 0x10915) = var_1e0 != 0
                                                                                                                                                                                    labelid_1:
                                                                                                                                                                                        ebx.b = 1
                                                                                                                                                                                else
                                                                                                                                                                                    *(arg1 + 0x108f9) = var_1e0 != 0
                                                                                                                                                                                labelid_1:
                                                                                                                                                                                    ebx.b = 1
                                                                                                                                                                            else
                                                                                                                                                                                *(arg1 + 0x108dd) = var_1e0 != 0
                                                                                                                                                                            labelid_1:
                                                                                                                                                                                ebx.b = 1
                                                                                                                                                                        else
                                                                                                                                                                            *(arg1 + 0x108c1) = var_1e0 != 0
                                                                                                                                                                        labelid_1:
                                                                                                                                                                            ebx.b = 1
                                                                                                                                                                    else
                                                                                                                                                                        *(arg1 + 0x108a5) = var_1e0 != 0
                                                                                                                                                                    labelid_1:
                                                                                                                                                                        ebx.b = 1
                                                                                                                                                                else if (sub_696100(arg1, var_1e0, 
                                                                                                                                                                        arg1[0x4144], 4) == 0)
                                                                                                                                                                    ebx.b = 0
                                                                                                                                                                else
                                                                                                                                                                    arg1[var_1e0 * 0x39 + 0x414c] = var_1dc
                                                                                                                                                                labelid_1:
                                                                                                                                                                    ebx.b = 1
                                                                                                                                                            else if (sub_696100(arg1, var_1e0, 
                                                                                                                                                                    arg1[0x4127], 4) == 0)
                                                                                                                                                                ebx.b = 0
                                                                                                                                                            else
                                                                                                                                                                *(&arg1[var_1e0 * 7] + 0x104a1) =
                                                                                                                                                                    var_1dc != 0
                                                                                                                                                            labelid_1:
                                                                                                                                                                ebx.b = 1
                                                                                                                                                        else if (sub_696100(arg1, var_1e0, 
                                                                                                                                                                arg1[0x410a], 4) == 0)
                                                                                                                                                            ebx.b = 0
                                                                                                                                                        else
                                                                                                                                                            *(&arg1[var_1e0 * 7] + 0x1042d) =
                                                                                                                                                                var_1dc != 0
                                                                                                                                                        labelid_1:
                                                                                                                                                            ebx.b = 1
                                                                                                                                                    else
                                                                                                                                                        arg1[0x2ef8] = var_1e0
                                                                                                                                                    labelid_1:
                                                                                                                                                        ebx.b = 1
                                                                                                                                                else
                                                                                                                                                    arg1[0x2ef7].b = var_1e0 != 0
                                                                                                                                                labelid_1:
                                                                                                                                                    ebx.b = 1
                                                                                                                                            else
                                                                                                                                                *(arg1 + 0x1040d) = var_1e0 != 0
                                                                                                                                            labelid_1:
                                                                                                                                                ebx.b = 1
                                                                                                                                        else
                                                                                                                                            arg1[0x2ef4].b = var_1e0 != 0
                                                                                                                                        labelid_1:
                                                                                                                                            ebx.b = 1
                                                                                                                                    else
                                                                                                                                        arg1[0x2ef3] = var_1e0
                                                                                                                                    labelid_1:
                                                                                                                                        ebx.b = 1
                                                                                                                                else
                                                                                                                                    var_254 = u"TYPE = %d"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                        void** var_238_74 = &var_1a0
                                                                                                                                        var_254 = u"NAME = %s"
                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                        var_254 = edi_1
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(var_254) != 0)
                                                                                                                                            var_238_10 = &var_1a0
                                                                                                                                            ecx_11 = &arg1[0x2eea]
                                                                                                                                            goto label_68e663
                                                                                                                                        
                                                                                                                                        int32_t* var_238_75 = &var_1e0
                                                                                                                                        var_254 = u"FUTOKU = %d"
                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                        var_254 = edi_1
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                            int32_t* var_238_76 = &var_1e0
                                                                                                                                            var_254 = u"SHADOW = %d"
                                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                                            var_254 = edi_1
                                                                                                                                            
                                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                                ebx.b = sub_6962d0(arg1)
                                                                                                                                            else
                                                                                                                                                switch (var_1e0)
                                                                                                                                                    case 0
                                                                                                                                                        arg1[0x2ef2] = 0
                                                                                                                                                    case 1
                                                                                                                                                        arg1[0x2ef2] = 1
                                                                                                                                                    case 2
                                                                                                                                                        arg1[0x2ef2] = 2
                                                                                                                                                    case 3
                                                                                                                                                        arg1[0x2ef2] = 3
                                                                                                                                                
                                                                                                                                            labelid_1:
                                                                                                                                                ebx.b = 1
                                                                                                                                        else
                                                                                                                                            arg1[0x2ef1].b = var_1e0 != 0
                                                                                                                                        labelid_1:
                                                                                                                                            ebx.b = 1
                                                                                                                                    else
                                                                                                                                        switch (var_1e0)
                                                                                                                                            case 0
                                                                                                                                                arg1[0x2ef0] = 0
                                                                                                                                            case 1
                                                                                                                                                arg1[0x2ef0] = 1
                                                                                                                                            case 2
                                                                                                                                                arg1[0x2ef0] = 2
                                                                                                                                            case 3
                                                                                                                                                arg1[0x2ef0] = 3
                                                                                                                                        
                                                                                                                                    labelid_1:
                                                                                                                                        ebx.b = 1
                                                                                                                            else
                                                                                                                                int16_t* var_21c
                                                                                                                                var_21c:3.b = var_1d4
                                                                                                                                var_21c:2.b = var_1e0.b
                                                                                                                                var_21c:1.b = var_1dc.b
                                                                                                                                var_21c.b = var_1d8
                                                                                                                                *(arg1 + 0xbba1) = var_21c
                                                                                                                            labelid_1:
                                                                                                                                ebx.b = 1
                                                                                                                        else
                                                                                                                            arg1[0x2ee8].b = var_1e0 != 0
                                                                                                                        labelid_1:
                                                                                                                            ebx.b = 1
                                                                                                                    else if (sub_695d60(arg1, var_1e0) == 0)
                                                                                                                        ebx.b = 0
                                                                                                                    else
                                                                                                                        arg1[0x2ee7] = var_1e0
                                                                                                                    labelid_1:
                                                                                                                        ebx.b = 1
                                                                                                                else
                                                                                                                    var_254 = u"ALL = %d"
                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                    var_254 = edi_1
                                                                                                                    
                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                        int32_t* var_238_66 = &var_1e0
                                                                                                                        var_254 = u"BGM = %d"
                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                        var_254 = edi_1
                                                                                                                        
                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                            int32_t* var_238_67 = &var_1e0
                                                                                                                            var_254 = u"KOE = %d"
                                                                                                                            sub_52e820(&var_250, var_254)
                                                                                                                            var_254 = edi_1
                                                                                                                            
                                                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                                                int32_t* var_238_68 = &var_1e0
                                                                                                                                var_254 = u"PCM = %d"
                                                                                                                                sub_52e820(&var_250, var_254)
                                                                                                                                var_254 = edi_1
                                                                                                                                
                                                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                                                    int32_t* var_238_69 = &var_1e0
                                                                                                                                    var_254 = u"SE = %d"
                                                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                                                    var_254 = edi_1
                                                                                                                                    
                                                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                                                        int32_t* var_238_70 = &var_1e0
                                                                                                                                        var_254 = u"MOV = %d"
                                                                                                                                        sub_52e820(&var_250, var_254)
                                                                                                                                        var_254 = edi_1
                                                                                                                                        
                                                                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                                                                            ebx.b = sub_6962d0(arg1)
                                                                                                                                        else if (sub_695d60(arg1, var_1e0) == 0)
                                                                                                                                            ebx.b = 0
                                                                                                                                        else
                                                                                                                                            arg1[0x2ee4] = var_1e0
                                                                                                                                        labelid_1:
                                                                                                                                            ebx.b = 1
                                                                                                                                    else if (sub_695d60(arg1, var_1e0) == 0)
                                                                                                                                        ebx.b = 0
                                                                                                                                    else
                                                                                                                                        arg1[0x2ee3] = var_1e0
                                                                                                                                    labelid_1:
                                                                                                                                        ebx.b = 1
                                                                                                                                else if (sub_695d60(arg1, var_1e0) == 0)
                                                                                                                                    ebx.b = 0
                                                                                                                                else
                                                                                                                                    arg1[0x2ee2] = var_1e0
                                                                                                                                labelid_1:
                                                                                                                                    ebx.b = 1
                                                                                                                            else if (sub_695d60(arg1, var_1e0) == 0)
                                                                                                                                ebx.b = 0
                                                                                                                            else
                                                                                                                                arg1[0x2ee1] = var_1e0
                                                                                                                            labelid_1:
                                                                                                                                ebx.b = 1
                                                                                                                        else if (sub_695d60(arg1, var_1e0) == 0)
                                                                                                                            ebx.b = 0
                                                                                                                        else
                                                                                                                            arg1[0x2ee0] = var_1e0
                                                                                                                        labelid_1:
                                                                                                                            ebx.b = 1
                                                                                                                    else if (sub_695d60(arg1, var_1e0) == 0)
                                                                                                                        ebx.b = 0
                                                                                                                    else
                                                                                                                        arg1[0x2edf] = var_1e0
                                                                                                                    labelid_1:
                                                                                                                        ebx.b = 1
                                                                                                            else
                                                                                                                int32_t eax_100 = var_1e0
                                                                                                                
                                                                                                                if (eax_100 == 0)
                                                                                                                    arg1[0x2ed6] = 0
                                                                                                                else if (eax_100 == 1)
                                                                                                                    arg1[0x2ed6] = 1
                                                                                                                
                                                                                                            labelid_1:
                                                                                                                ebx.b = 1
                                                                                                    else
                                                                                                        int32_t eax_96 = var_1e0
                                                                                                        
                                                                                                        if (eax_96 == 0xffffffff)
                                                                                                            goto label_68ec01
                                                                                                        
                                                                                                        if (sub_696100(arg1, eax_96, 
                                                                                                                arg1[0x2d63], 0x100) == 0)
                                                                                                            ebx.b = 0
                                                                                                        else
                                                                                                            eax_96 = var_1e0
                                                                                                        label_68ec01:
                                                                                                            arg1[0x2d64] = eax_96
                                                                                                        labelid_1:
                                                                                                            ebx.b = 1
                                                                                                else if (sub_696100(arg1, var_1e0, 
                                                                                                        arg1[0x2d63], 0x100) == 0)
                                                                                                    ebx.b = 0
                                                                                                else
                                                                                                    int32_t esi_7 = var_1e0
                                                                                                    void** var_238_60 = &var_1a0
                                                                                                    var_254 = u"FILE = %s"
                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                    var_254 = edi_1
                                                                                                    
                                                                                                    if (sub_6afb70(var_254) != 0)
                                                                                                        var_238_10 = &var_1a0
                                                                                                        ecx_11 = &arg1[esi_7 * 7 + 0x2663]
                                                                                                        goto label_68e663
                                                                                                    
                                                                                                    int32_t* var_238_61 = &var_1e0
                                                                                                    var_254 = u"SPEED = %d"
                                                                                                    sub_52e820(&var_250, var_254)
                                                                                                    var_254 = edi_1
                                                                                                    
                                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                                        ebx.b = sub_6962d0(arg1)
                                                                                                    else
                                                                                                        arg1[esi_7 * 7 + 0x2669] = var_1e0
                                                                                                    labelid_1:
                                                                                                        ebx.b = 1
                                                                                            else if (
                                                                                                    sub_695f30(arg1, var_1e0, 0, 0x100)
                                                                                                    == 0)
                                                                                                ebx.b = 0
                                                                                            else
                                                                                                arg1[0x2d63] = var_1e0
                                                                                            labelid_1:
                                                                                                ebx.b = 1
                                                                                        else if (sub_696100(arg1, var_1e0, 
                                                                                                arg1[0x2662], 0x100) == 0)
                                                                                            ebx.b = 0
                                                                                        else
                                                                                            int32_t esi_4 = var_1e0
                                                                                            void** var_238_53 = &var_1a0
                                                                                            var_254 = u"FILE = %s"
                                                                                            sub_52e820(&var_250, var_254)
                                                                                            var_254 = edi_1
                                                                                            
                                                                                            if (sub_6afb70(var_254) != 0)
                                                                                                var_238_10 = &var_1a0
                                                                                                ecx_11 = &arg1[0x1e62 + esi_4 * 8]
                                                                                                goto label_68e663
                                                                                            
                                                                                            int32_t* var_238_54 = &var_1e0
                                                                                            var_254 = u"CNT = %d"
                                                                                            sub_52e820(&var_250, var_254)
                                                                                            var_254 = edi_1
                                                                                            
                                                                                            if (sub_6afb70(var_254) == 0)
                                                                                                int32_t* var_238_55 = &var_1e0
                                                                                                var_254 = u"SPEED = %d"
                                                                                                sub_52e820(&var_250, var_254)
                                                                                                var_254 = edi_1
                                                                                                
                                                                                                if (sub_6afb70(var_254) == 0)
                                                                                                    ebx.b = sub_6962d0(arg1)
                                                                                                else
                                                                                                    arg1[esi_4 * 8 + 0x1e69] = var_1e0
                                                                                                labelid_1:
                                                                                                    ebx.b = 1
                                                                                            else
                                                                                                arg1[(esi_4 + 0x3cd) * 8] = var_1e0
                                                                                            labelid_1:
                                                                                                ebx.b = 1
                                                                                    else if (
                                                                                            sub_695f30(arg1, var_1e0, 0, 0x100)
                                                                                            == 0)
                                                                                        ebx.b = 0
                                                                                    else
                                                                                        arg1[0x2662] = var_1e0
                                                                                    labelid_1:
                                                                                        ebx.b = 1
                                                                                else
                                                                                    int32_t esi_2 = var_1e0
                                                                                    var_254 = u"KEY = %d"
                                                                                    sub_52e820(&var_250, var_254)
                                                                                    var_254 = edi_1
                                                                                    
                                                                                    if (sub_6afb70(var_254) == 0)
                                                                                        int32_t* var_238_44 = &var_1e0
                                                                                        var_254 = u"COND = %d"
                                                                                        sub_52e820(&var_250, var_254)
                                                                                        var_254 = edi_1
                                                                                        
                                                                                        if (sub_6afb70(var_254) == 0)
                                                                                            void** var_238_45 = &var_188
                                                                                            void** var_23c_21 = &var_1a0
                                                                                            var_258 = u"SCENE = %s, %s"
                                                                                            sub_52e820(&var_254, var_258)
                                                                                            var_258 = edi_1
                                                                                            
                                                                                            if (sub_6afb70(var_258) != 0)
                                                                                                void* esi_3 = &arg1[esi_2 * 6]
                                                                                                sub_536260(esi_3 + 0x4588, &var_1a0)
                                                                                                var_238_10 = &var_188
                                                                                                ecx_11 = esi_3 + 0x6188
                                                                                                goto label_68e663
                                                                                            
                                                                                            int32_t* var_238_47 = &var_1e0
                                                                                            void** var_23c_22 = &var_1a0
                                                                                            var_258 = u"SCENE = %s, %d"
                                                                                            sub_52e820(&var_254, var_258)
                                                                                            var_258 = edi_1
                                                                                            
                                                                                            if (sub_6afb70(var_258) == 0)
                                                                                                var_254 = u"SCENE = %s"
                                                                                                sub_52e820(&var_250, var_254)
                                                                                                var_254 = edi_1
                                                                                                
                                                                                                if (sub_6afb70(var_254) != 0)
                                                                                                    sub_536260(
                                                                                                        &arg1[(esi_2 * 3 + 0x8b1) * 2], 
                                                                                                        &var_1a0)
                                                                                                    arg1[esi_2 + 0x1762] = 0
                                                                                            else
                                                                                                sub_536260(
                                                                                                    &arg1[(esi_2 * 3 + 0x8b1) * 2], 
                                                                                                    &var_1a0)
                                                                                                arg1[esi_2 + 0x1762] = var_1e0
                                                                                            
                                                                                        labelid_1:
                                                                                            ebx.b = 1
                                                                                        else
                                                                                            arg1[esi_2 + 0x1062] = var_1e0
                                                                                        labelid_1:
                                                                                            ebx.b = 1
                                                                                    else
                                                                                        arg1[esi_2 + 0xf62] = var_1e0
                                                                                    labelid_1:
                                                                                        ebx.b = 1
                                                                            else if (
                                                                                    sub_695f30(arg1, var_1e0, 0, 0x100)
                                                                                    == 0)
                                                                                ebx.b = 0
                                                                            else
                                                                                arg1[0xf61] = var_1e0
                                                                            labelid_1:
                                                                                ebx.b = 1
                                                                        else
                                                                            int32_t esi_1 = var_1e0
                                                                            void** var_23c_19 = &var_1a0
                                                                            var_258 = u"SCENE = %s , %d"
                                                                            sub_52e820(&var_254, var_258)
                                                                            var_258 = edi_1
                                                                            
                                                                            if (sub_6afb70(var_258) == 0)
                                                                                int32_t* var_238_40 = &var_1e0
                                                                                var_254 = u"ANGLE = %d"
                                                                                sub_52e820(&var_250, var_254)
                                                                                var_254 = edi_1
                                                                                
                                                                                if (sub_6afb70(var_254) != 0)
                                                                                    arg1[esi_1 + 0x75f] = var_1e0
                                                                            else
                                                                                sub_536260(esi_1 * 0x18 + 0x17c + arg1, 
                                                                                    &var_1a0)
                                                                                arg1[esi_1 + 0x65f] = var_1e0
                                                                            
                                                                        labelid_1:
                                                                            ebx.b = 1
                                                                    else if (
                                                                            sub_695f30(arg1, var_1e0, 0, 0x100)
                                                                            == 0)
                                                                        ebx.b = 0
                                                                    else
                                                                        arg1[0x5e] = var_1e0
                                                                    labelid_1:
                                                                        ebx.b = 1
                                                                else
                                                                    if (sub_696100(arg1, var_1e0, 
                                                                            arg1[0x960], 0x100) != 0)
                                                                        var_238_10 = &var_1a0
                                                                        ecx_46 = var_1e0 * 0x18 + 0x2584
                                                                    label_68e661:
                                                                        ecx_11 = ecx_46 + arg1
                                                                        goto label_68e663
                                                                    
                                                                    ebx.b = 0
                                                            else if (
                                                                    sub_695f30(arg1, var_1e0, 0, 0x100)
                                                                    == 0)
                                                                ebx.b = 0
                                                            else
                                                                arg1[0x960] = var_1e0
                                                            labelid_1:
                                                                ebx.b = 1
                                                        else if (sub_696100(arg1, var_1e0, 
                                                                arg1[0x85f], 0x100) == 0)
                                                            ebx.b = 0
                                                        else
                                                            arg1[var_1e0 + 0x860] = var_1dc
                                                        labelid_1:
                                                            ebx.b = 1
                                                    else if (sub_695f30(arg1, var_1e0, 0, 0x100)
                                                            == 0)
                                                        ebx.b = 0
                                                    else
                                                        arg1[0x85f] = var_1e0
                                                    labelid_1:
                                                        ebx.b = 1
                                                else
                                                    sub_536260(&arg1[0x4b], &var_1a0)
                                                    arg1[0x51] = var_1e0
                                                labelid_1:
                                                    ebx.b = 1
                                            else
                                                sub_536260(&arg1[0x44], &var_1a0)
                                                arg1[0x4a] = var_1e0
                                            labelid_1:
                                                ebx.b = 1
                                        else
                                            sub_536260(&arg1[0x3d], &var_1a0)
                                            arg1[0x43] = var_1e0
                                        labelid_1:
                                            ebx.b = 1
                                    else
                                        sub_536260(&arg1[0x36], &var_1a0)
                                        arg1[0x3c] = var_1e0
                                    labelid_1:
                                        ebx.b = 1
                                else
                                    sub_536260(&arg1[0x2f], &var_1a0)
                                    arg1[0x35] = var_1e0
                                labelid_1:
                                    ebx.b = 1
                            else
                                sub_536260(&arg1[0x28], &var_1a0)
                                arg1[0x2e] = var_1e0
                            labelid_1:
                                ebx.b = 1
                        else
                            sub_536260(&arg1[0x21], &var_1a0)
                            arg1[0x27] = var_1e0
                        labelid_1:
                            ebx.b = 1
                    else
                        int32_t ecx_13 = var_1dc
                        arg1[0x1f] = var_1e0
                        arg1[0x20] = ecx_13
                    labelid_1:
                        ebx.b = 1
                else
                    var_238_10 = &var_1a0
                    ecx_11 = &arg1[0x19]
                label_68e663:
                    sub_536260(ecx_11, var_238_10)
                labelid_1:
                    ebx.b = 1
            else
                ecx_6 = &arg1[1]
            label_68e0dc:
                
                if (ecx_6 == &var_1a0)
                label_68e668:
                    ebx.b = 1
                else
                    sub_52e3c0(ecx_6, &var_1a0, 0, 0xffffffff)
                label_68e668_1:
                    ebx.b = 1
        else
            *arg1 = var_1e0
        label_68e668_2:
            ebx.b = 1

label_68e67a:
int32_t var_c_2 = 0xffffffff
`eh vector vbase constructor iterator'(&var_1a0, 0x18, 0x10, sub_52e8a0)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_224)
return result
