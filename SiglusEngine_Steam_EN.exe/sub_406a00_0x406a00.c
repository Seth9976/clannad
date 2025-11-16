// 函数: sub_406a00
// 地址: 0x406a00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1[1]
int32_t* result_1 = *arg1
void* i_2 = *(edi + 0x200)
int32_t eax_2
eax_2.b = ((i_2 << 2) + 3).b & 0xfc
__chkstk(eax_2)
void* edi_1 = *(edi + 0x1fc)
int32_t* result = result_1
int32_t __saved_edi
int32_t* ebx = &__saved_edi
void* var_10 = edi_1

if (edi_1 s< result)
    while (true)
        if (edi_1 + i_2 s> result)
            i_2 = result - edi_1
        
        if (i_2 s> 0)
            int32_t* ecx = ebx
            void* i_1 = i_2
            int32_t eax_4 = arg2 + (edi_1 << 2)
            void* i
            
            do
                *ecx = eax_4
                eax_4 += 4
                ecx = &ecx[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_5f02f0(ebx, i_2, 4, sub_4069b0)
        
        if (i_2 s> 0)
            int32_t* ecx_1 = nullptr
            void* i_3 = i_2
            bool cond:1_1
            
            do
                void* eax_6 = ecx_1 - (var_10 << 2)
                int32_t edx_4 = *(ecx_1 + ebx)
                ecx_1 = &ecx_1[1]
                *(eax_6 + (edi_1 << 2) + arg3) = (edx_4 - arg2) s>> 2
                ebx = &__saved_edi
                cond:1_1 = i_3 != 1
                i_3 -= 1
            while (cond:1_1)
        
        result = result_1
        edi_1 += i_2
        
        if (edi_1 s>= result)
            break
        
        result = result_1

return result
