// 函数: sub_710340
// 地址: 0x710340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d10e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x10))(arg6, arg7, arg8)
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_541eb0(&var_30, &data_b0018c, nullptr)
int32_t var_8_1 = 0

if (arg2 != &var_30)
    sub_541b40(arg2, &var_30, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff

if (var_1c u>= 0x10)
    j__free(var_30.d)

int32_t eax_7 = *arg1
int32_t var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0
(*eax_7)(eax_2)
sub_70fe10(&arg1[1], arg2)
sub_6b3720(arg2, 0xb04184, 1)
(*(*arg1 + 0xc))(arg2, arg5)
sub_710520(arg1, arg2)
sub_6b3720(arg2, "VS_OUTPUT vs_main( VS_INPUT In ) {\n", 0x23)
sub_70eb20(&arg1[5], arg2, arg3)
sub_6b3720(arg2, 0xb04184, 1)
(*(*arg1 + 4))(arg2, &arg1[5], &arg1[0x25], arg6, arg7, arg8)
sub_6b3720(arg2, 0xb088ec, 3)
sub_6b3720(arg2, 0xb04184, 1)
sub_710020(&arg1[1], arg2, arg4)
sub_710600(arg1, arg2)
sub_6b3720(arg2, "PS_OUTPUT ps_main( VS_OUTPUT In ) {\n", 0x24)
(*(*arg1 + 8))(arg2, &arg1[0x44], &arg1[0x63], arg6, arg7, arg8)
sub_6b3720(arg2, 0xb09b20, 2)
sub_6b3720(arg2, 0xb04184, 1)
sub_6b3720(arg2, 
    "technique tech {\n\tpass p0 {\n\t\tVertexShader = compile vs_2_0 vs_main();\n\t\tPixelShader  = "
"compile ps_2_0 ps_main();\n\t}\n}\n", 
    0x77)
int32_t* result = sub_7106e0(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
