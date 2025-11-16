// 函数: sub_6c08b0
// 地址: 0x6c08b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_88
int32_t eax_1 = __security_cookie ^ &var_88
int128_t rect_1 = zx.o(0)
int128_t xmm0 = *arg3
POINT point
__builtin_memset(&point, 0, 8)
int128_t var_50 = xmm0
GetCursorPos(&point)
int32_t edx = *(arg1 + 4)
int32_t esi_1 = var_50:0xc.d
int32_t ecx = var_50:8.d
int32_t edi = var_50.d
int32_t var_74 = var_50:4.d
int32_t x = point.x
int32_t var_5c = esi_1
int32_t var_58 = ecx
int32_t ecx_1
int32_t edx_1

if (data_4ebe444 != edx || data_4ebe440 != 2)
    data_4ebe444 = edx
    data_4ebe440 = 2
    data_4ebe458.d = 0
    
    if (arg2 == 1 || arg2 == 4 || arg2 == 7)
        edx_1 = point.x - edi
        data_4ebe458 = 1
        data_4ebe448 = edx_1
    else
        edx_1 = data_4ebe448
    
    if (arg2 == 2 || arg2 == 5 || arg2 == 8)
        edx_1 = point.x - ecx
        data_4ebe459 = 1
        data_4ebe448 = edx_1
    
    if (arg2 == 3 || arg2 == 4 || arg2 == 5)
        ecx_1 = point.y - var_74
        data_4ebe44c = ecx_1
        data_4ebe45a = 1
    else
        ecx_1 = data_4ebe44c
    
    if (arg2 == 6 || arg2 == 7 || arg2 == 8)
        ecx_1 = point.y - esi_1
        data_4ebe45b = 1
        data_4ebe44c = ecx_1
    
    x = point.x
else
    ecx_1 = data_4ebe44c
    edx_1 = data_4ebe448

if (data_4ebe458 != 0)
    edi = x - edx_1
    var_50.d = edi

if (data_4ebe459 != 0)
    int32_t eax_5 = x - edx_1
    var_58 = eax_5
    var_50:8.d = eax_5

int32_t y = point.y

if (data_4ebe45a != 0)
    int32_t eax_7 = y - ecx_1
    var_74 = eax_7
    var_50:4.d = eax_7

if (data_4ebe45b != 0)
    int32_t eax_9 = y - ecx_1
    var_5c = eax_9
    var_50:0xc.d = eax_9

int32_t* i = data_4ebe45c
int32_t var_70 = 0
int32_t var_6c = 0

if (i != data_4ebe460)
    void* ecx_4 = arg1
    
    do
        HWND hWnd = *i
        
        if (hWnd != *(ecx_4 + 4))
            if ((GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) != 0)
                GetWindowRect(*i, &rect_1)
                
                if (edi s< rect_1:8.d + 0x10)
                    sub_6c0c90(*i, &var_50, &rect_1, &var_70)
            
            ecx_4 = arg1
        
        i = &i[1]
    while (i != data_4ebe460)

int16_t var_60 = 0
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(*(arg1 + 4), &rect)
int32_t eax_16
int32_t edx_4
edx_4:eax_16 = sx.q(rect.right - rect.left)
int32_t eax_20
int32_t edx_5
edx_5:eax_20 = sx.q(rect.bottom - rect.top)
int32_t eax_23 = ((eax_20 - edx_5) s>> 1) + rect.top
sub_6c29e0(eax_23, edx_5, &rect_1, ((eax_16 - edx_4) s>> 1) + rect.left, eax_23)

if (edi s< rect_1:8.d + 0x10)
    int32_t esi_5 = rect_1.d
    
    if (var_58 s> esi_5 - 0x10)
        int32_t ecx_7 = rect_1:0xc.d
        
        if (var_74 s< ecx_7 + 0x10)
            int32_t edx_6 = rect_1:4.d
            
            if (var_5c s> edx_6 - 0x10)
                if (data_4ebe458 != 0)
                    if (esi_5 - edi + 0x10 u<= 0x20)
                        var_60.b = 1
                        int32_t var_68_1 = 0
                    
                    if (rect_1:8.d - edi + 0x10 u<= 0x20)
                        var_60.b = 1
                        int32_t var_68_2 = 1
                
                if (data_4ebe459 != 0)
                    if (esi_5 - var_58 + 0x10 u<= 0x20)
                        var_60.b = 1
                        int32_t var_68_3 = 2
                    
                    if (rect_1:8.d - var_58 + 0x10 u<= 0x20)
                        var_60.b = 1
                        int32_t var_68_4 = 3
                
                if (data_4ebe45a != 0)
                    if (edx_6 - var_74 + 0x10 u<= 0x20)
                        var_60:1.b = 1
                        int32_t var_64_1 = 0
                    
                    if (ecx_7 - var_74 + 0x10 u<= 0x20)
                        var_60:1.b = 1
                        int32_t var_64_2 = 1
                
                if (data_4ebe45b != 0)
                    if (edx_6 - var_5c + 0x10 u<= 0x20)
                        var_60:1.b = 1
                        int32_t var_64_3 = 2
                    
                    if (ecx_7 - var_5c + 0x10 u<= 0x20)
                        var_60:1.b = 1
                        int32_t var_64_4 = 3

sub_6c0e40(arg1, &var_50, &var_70)
*arg3 = var_50
sub_745f2b(eax_1 ^ &var_88)
return arg3
