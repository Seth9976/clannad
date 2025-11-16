// 函数: sub_6c0570
// 地址: 0x6c0570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_88
int32_t eax_1 = __security_cookie ^ &var_88
int128_t rect_1 = zx.o(0)
POINT point
__builtin_memset(&point, 0, 8)
int128_t var_60 = *arg2
GetCursorPos(&point)
void* ecx = arg1
int32_t y = point.y
int32_t x = point.x
int32_t eax_3 = *(ecx + 4)
int32_t var_78
int32_t var_48
int32_t eax_4
int32_t esi

if (data_4ebe444 != eax_3 || data_4ebe440 != 1)
    data_4ebe444 = eax_3
    int32_t esi_2 = y - var_60:4.d
    int32_t eax_6 = x - var_60.d
    var_78 = esi_2
    data_4ebe44c = esi_2
    int32_t esi_4 = var_60:8.d - var_60.d
    data_4ebe450 = esi_4
    esi = var_60:0xc.d - var_60:4.d
    var_48 = eax_6
    data_4ebe448 = eax_6
    eax_4 = esi_4
    data_4ebe440 = 1
    data_4ebe458.d = 0x1010101
    data_4ebe454 = esi
else
    esi = data_4ebe454
    eax_4 = data_4ebe450
    var_78 = data_4ebe44c
    var_48 = data_4ebe448
    ecx = arg1

int32_t edx = y - var_78
int32_t edi = x - var_48
var_60.d = edi
var_60:8.d = eax_4 + edi
int32_t* i = data_4ebe45c
var_60:4.d = edx
var_60:0xc.d = esi + edx
int32_t var_74 = 0
int32_t var_70 = 0

for (; i != data_4ebe460; i = &i[1])
    HWND hWnd_1 = *i
    
    if (hWnd_1 != *(ecx + 4))
        if ((GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) != 0)
            GetWindowRect(*i, &rect_1)
            
            if (edi s< rect_1:8.d + 0x10)
                sub_6c0c90(*i, &var_60, &rect_1, &var_74)
        
        ecx = arg1

int16_t var_64 = 0
HWND hWnd = *(ecx + 4)
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(hWnd, &rect)
int32_t eax_14
int32_t edx_1
edx_1:eax_14 = sx.q(rect.right - rect.left)
int32_t eax_18
int32_t edx_2
edx_2:eax_18 = sx.q(rect.bottom - rect.top)
int32_t eax_21 = ((eax_18 - edx_2) s>> 1) + rect.top
sub_6c29e0(eax_21, edx_2, &rect_1, ((eax_14 - edx_1) s>> 1) + rect.left, eax_21)

if (edi s< rect_1:8.d + 0x10)
    int32_t esi_9 = rect_1.d
    
    if (var_60:8.d s> esi_9 - 0x10)
        int32_t ecx_5 = rect_1:0xc.d
        
        if (edx s< ecx_5 + 0x10)
            int32_t edx_3 = rect_1:4.d
            
            if (var_60:0xc.d s> edx_3 - 0x10)
                if (data_4ebe458 != 0)
                    if (esi_9 - edi + 0x10 u<= 0x20)
                        var_64.b = 1
                        int32_t var_6c_1 = 0
                    
                    if (rect_1:8.d - edi + 0x10 u<= 0x20)
                        var_64.b = 1
                        int32_t var_6c_2 = 1
                
                if (data_4ebe459 != 0)
                    int32_t edi_1 = var_60:8.d
                    
                    if (esi_9 - edi_1 + 0x10 u<= 0x20)
                        var_64.b = 1
                        int32_t var_6c_3 = 2
                    
                    if (rect_1:8.d - edi_1 + 0x10 u<= 0x20)
                        var_64.b = 1
                        int32_t var_6c_4 = 3
                
                if (data_4ebe45a != 0)
                    if (edx_3 - edx + 0x10 u<= 0x20)
                        var_64:1.b = 1
                        int32_t var_68_1 = 0
                    
                    if (ecx_5 - edx + 0x10 u<= 0x20)
                        var_64:1.b = 1
                        int32_t var_68_2 = 1
                
                if (data_4ebe45b != 0)
                    int32_t esi_12 = var_60:0xc.d
                    
                    if (edx_3 - esi_12 + 0x10 u<= 0x20)
                        var_64:1.b = 1
                        int32_t var_68_3 = 2
                    
                    if (ecx_5 - esi_12 + 0x10 u<= 0x20)
                        var_64:1.b = 1
                        int32_t var_68_4 = 3

sub_6c0e40(arg1, &var_60, &var_74)
*arg2 = var_60
sub_745f2b(eax_1 ^ &var_88)
return arg2
