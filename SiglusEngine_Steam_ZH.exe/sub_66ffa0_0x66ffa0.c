// 函数: sub_66ffa0
// 地址: 0x66ffa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_114 = 0
char const* const var_11c
void var_110

switch (jump_table_670098[*arg1])
    case 0x66ffca
        var_11c = "null"
    label_670080:
        sub_541920(arg2, var_11c)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return arg2
    case 0x66ffd4
        char* eax_2 = "true"
        
        if (arg1[2].b == 0)
            eax_2 = "false"
        
        var_11c = eax_2
        goto label_670080
    case 0x66ffeb
        int32_t var_11c_1 = arg1[2]
        sub_66ff80(&var_110, 0x100, 0xaf9458)
        var_11c = &var_110
        goto label_670080
    case 0x670010
        int32_t var_120
        var_120.q = *(arg1 + 8)
        void* const var_124 = &data_af945c
        void* var_12c = &var_110
        return sub_67002e(&__saved_ebp, arg2, 0x100) __tailcall
    case 0x67003f
        void** eax_4 = arg1[2]
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_541b40(arg2, eax_4, 0, 0xffffffff)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return arg2
    case 0x670072
        var_11c = "array"
        goto label_670080
    case 0x670079
        var_11c = "object"
        goto label_670080
