// 函数: sub_42ae08
// 地址: 0x42ae08
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_110 = edi
void var_108

switch (*arg3)
    case 0
        sub_74aa1b(&var_108, 0x100, "version token")
    case 1
        void* var_114_1 = &arg3[2]
        sub_74aa1b(&var_108, 0x100, "token '%s'")
    case 2
        int32_t var_114_2 = arg3[2]
        sub_74aa1b(&var_108, 0x100, "integer '%u'")
    case 3
        int32_t var_114_3 = arg3[2]
        sub_74aa1b(&var_108, 0x100, "integer '%dl'")
    case 4
        int32_t var_114_4 = arg3[2]
        sub_74aa1b(&var_108, 0x100, "integer '%uul'")
    case 5
        int32_t* var_114_5 = arg1
        int32_t* var_118_2 = arg1
        var_118_2.q = fconvert.d(fconvert.t(*(arg3 + 8)))
        sub_74aa1b(&var_108, 0x100, "float '%g'")
    case 6
        int32_t* var_114_6 = arg1
        int32_t* var_118_3 = arg1
        var_118_3.q = fconvert.d(fconvert.t(*(arg3 + 8)))
        sub_74aa1b(&var_108, 0x100, "float '%gh'")
    case 7
        int32_t* var_114_7 = arg1
        int32_t* var_118_4 = arg1
        var_118_4.q = fconvert.d(fconvert.t(*(arg3 + 8)))
        sub_74aa1b(&var_108, 0x100, "float '%gf'")
    case 8
        int32_t* var_114_8 = arg1
        int32_t* var_118_5 = arg1
        var_118_5.q = fconvert.d(fconvert.t(*(arg3 + 8)))
        sub_74aa1b(&var_108, 0x100, "float '%gl'")
    case 9
        int32_t var_114_9 = arg3[2]
        sub_74aa1b(&var_108, 0x100, "token '%s'")
    case 0xa
        sub_74aa1b(&var_108, 0x100, "string constant")
    case 0xc
        sub_74aa1b(&var_108, 0x100, "end of line")
    case 0xd
        sub_74aa1b(&var_108, 0x100, "end of file")
    default
        sub_74aa1b(&var_108, 0x100, "token")

void* var_114_10 = &var_108
int32_t result = sub_42aba3(arg1, arg3, arg2, "syntax error : unexpected %s")
sub_745f2b(__security_cookie_1)
return result
