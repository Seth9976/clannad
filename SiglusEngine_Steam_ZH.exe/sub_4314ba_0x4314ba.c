// 函数: sub_4314ba
// 地址: 0x4314ba
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
void* var_c
sub_42f25e(&var_c, &esi[4])
arg1 = nullptr
int32_t* var_8 = nullptr
void var_c4
sub_46cade(&var_c4)

if (arg7 != 0)
    *arg7 = 0

if (arg5 != 0)
    *arg5 = 0

int32_t edi
int32_t var_d0_1 = edi
void* eax_3 = sub_431392(esi, arg2)

if (eax_3 != 0)
    sub_42a55f(&esi[0xa])
    arg2 = nullptr
    char* eax_7 =
        sub_47dbdd(&esi[4], esi[0xc8], *(eax_3 + 0x20), nullptr, arg3, arg4 | 0x100, &arg1, nullptr)
    arg2 = eax_7
    
    if (eax_7 s>= 0)
        if (sub_699170(&esi[0xa]) u> 0)
            arg2 = 0x88760b59
        
        if (arg2 s>= 0)
            int32_t* eax_9 = arg1
            char* eax_11 = sub_46b36a((*(*eax_9 + 0xc))(eax_9), &var_8)
            arg2 = eax_11
            
            if (eax_11 s>= 0)
                if (arg5 != 0)
                    *arg5 = arg1
                    arg1 = nullptr
                
                if (arg7 != 0)
                    *arg7 = var_8
                    var_8 = nullptr
else
    arg2 = 0x8876086c

if (arg6 != 0)
    sub_42a5fc(&esi[0xa], arg6)

int32_t* eax_14 = arg1

if (eax_14 != 0)
    (*(*eax_14 + 8))(eax_14)
    arg1 = nullptr

int32_t* eax_15 = var_8

if (eax_15 != 0)
    (*(*eax_15 + 8))(eax_15)
    var_8 = nullptr

sub_46e503(&var_c4)
sub_42d09d(var_c)
return arg2
