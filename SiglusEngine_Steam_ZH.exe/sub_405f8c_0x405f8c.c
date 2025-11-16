// 函数: sub_405f8c
// 地址: 0x405f8c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = nullptr
int32_t edi
int32_t var_164 = edi
sub_416380(1)
int32_t var_158

if (arg1 != 0)
    (*(*arg1 + 0x18))(arg1, &var_8)
    (*(*arg1 + 0x1c))(arg1, &var_158)
    void var_28
    (*(*arg1 + 0x20))(arg1, 0, &var_28)
    
    if ((arg3 & 0x10) != 0)
        void var_18
        (*(*arg1 + 0x24))(arg1, &var_18)
        char var_c
        
        if ((var_c & 0x20) != 0)
            arg2 |= 0x10

void* ebx = 0xffffffff
void* const i_1 = &data_ab4c58
void* const i = &data_ab4c80

if (data_b4d5e8 u> &data_ab4c80)
    do
        int32_t eax_5 = *i
        
        if (eax_5 != 0)
            int32_t* ecx_1 = var_8
            int32_t eax_6
            int32_t var_154
            int32_t var_1c
            
            if (ecx_1 != 0)
                eax_6 = (*(*ecx_1 + 0x28))(ecx_1, var_154, var_158, var_1c, arg2, arg4, eax_5)
            
            if (ecx_1 == 0 || eax_6 s>= 0)
                if (*arg5 == *i)
                    i_1 = i
                    break
                
                if (*(i + 0x20) != 0)
                    void* eax_8 = sub_405f15(arg5, i)
                    
                    if (eax_8 != 0xffffffff && eax_8 u<= ebx
                            && (eax_8 != ebx || *(i + 8) u< *(i_1 + 8)))
                        ebx = eax_8
                        i_1 = i
        
        i += 0x24
    while (i u< data_b4d5e8)

int32_t* eax_9 = var_8

if (eax_9 != 0)
    (*(*eax_9 + 8))(eax_9)
    var_8 = nullptr

sub_416380(0)
return *i_1
