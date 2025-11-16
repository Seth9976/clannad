// 函数: sub_5b9f90
// 地址: 0x5b9f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = data_bac46c
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x30c30c31, *(eax_2 + 0xa8) - *(eax_2 + 0xa4))
POINT point
__builtin_memset(&point, 0, 8)
int32_t edx_1 = edx s>> 6
int32_t ebx_2 = (edx_1 u>> 0x1f) + edx_1
GetCursorPos(&point)
int32_t edi = 0
BOOL result

if (ebx_2 s> 0)
    int32_t esi_1 = 0
    
    do
        result = *(data_bac46c + 0xa4)
        
        if (*(result + esi_1 + 0xc0) != 0)
            RECT rect
            __builtin_memset(&rect, 0, 0x10)
            GetWindowRect(*(result + esi_1 + 0xc0), &rect)
            result = point.x
            
            if (rect.left s<= result && result s< rect.right)
                result = point.y
                
                if (rect.top s<= result && result s< rect.bottom)
                    result.b = 1
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return result
        
        edi += 1
        esi_1 += 0x150
    while (edi s< ebx_2)

result.b = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
