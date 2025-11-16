// 函数: sub_495d90
// 地址: 0x495d90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 u> 0x100)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

void* eax_5 = sub_495490(arg3)

if (eax_5 != 0)
    int32_t eax_6 = *(eax_5 + 0x7cc)
    int32_t eax_7 = *(eax_5 + 0x7d0)
    
    if (*(eax_5 + 0x7d8) s> 0)
        int32_t var_24c_1 = arg3
        void var_210
        sub_4c84d0(&var_210, "save%03d.sav")
        uint32_t var_260_1 = *(eax_5 + 0x7d8)
        BOOL var_218 = 0
        int32_t var_264_1 = *(eax_5 + 0x7c8)
        int32_t var_214 = 0
        sub_4c4a00(&var_218, &var_214, &var_210, &var_218, "AVG_ARC_THUMBNAIL", var_264_1, 
            var_260_1, 4, 0x1e)
        
        if (var_214 != 0)
            void* edx_1 = *(eax_5 + 0x7d8)
            BOOL ecx_1 = var_218
            int32_t var_220 = 0
            int32_t var_21c = 0
            void var_23c
            BOOL eax_10 = sub_4bbdb0(&var_21c, edx_1, ecx_1, &var_21c, &var_220, &var_23c)
            int32_t edi_1 = var_21c
            sub_4d6560(eax_10, eax_10, edi_1, "AVG_GET_THUMBNAIL")
            sub_4d6c40(&var_214, &var_218)
            
            if (arg2 != 0)
                *arg2 = edi_1
            
            if (arg4 != 0)
                *arg4 = var_220
            
            if (arg5 != 0)
                *arg5 = eax_6
            
            if (arg6 != 0)
                *arg6 = eax_7
            
            if (arg7 != 0)
                sub_4d1c30(arg7, eax_5 + 8, arg7, 0x10)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
