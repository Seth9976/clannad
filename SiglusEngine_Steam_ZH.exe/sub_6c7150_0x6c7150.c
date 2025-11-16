// 函数: sub_6c7150
// 地址: 0x6c7150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi = arg2[1]
int32_t* esi_1 = *arg2
GetWindowLongW(*(*esi_1 + 4), 0xfffffff8)
sub_6c1350(*esi_1, arg1)
void* esi_2 = &esi_1[1]
int32_t var_1c = 0
uint32_t eax_6 = (edi - esi_2 + 3) u>> 2

if (esi_2 u> edi)
    eax_6 = 0

if (eax_6 != 0)
    int32_t eax_12
    
    do
        void* edi_1 = *esi_2
        RECT rect
        __builtin_memset(&rect, 0, 0x10)
        GetWindowRect(*(edi_1 + 4), &rect)
        int32_t hWnd = GetWindowLongW(*(edi_1 + 4), 0xfffffff8)
        POINT point_1
        point_1.x = rect.left
        point_1.y = rect.top
        ScreenToClient(hWnd, &point_1)
        POINT point
        point.x = rect.right
        point.y = rect.bottom
        ScreenToClient(hWnd, &point)
        int32_t y = point_1.y
        
        if (arg1[1] s> y)
            arg1[1] = y
        
        int32_t y_1 = point.y
        
        if (arg1[3] s< y_1)
            arg1[3] = y_1
        
        int32_t x = point_1.x
        
        if (*arg1 s> x)
            *arg1 = x
        
        int32_t x_1 = point.x
        
        if (arg1[2] s< x_1)
            arg1[2] = x_1
        
        esi_2 += 4
        eax_12 = var_1c + 1
        var_1c = eax_12
    while (eax_12 != eax_6)

sub_745f2b(eax_1 ^ &__saved_ebp)
return arg1
