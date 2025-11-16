// 函数: sub_681670
// 地址: 0x681670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HCURSOR hCursor = nullptr
POINT point
__builtin_memset(&point, 0, 8)
GetCursorPos(&point)
POINT point_1
point_1.x = point.x
point_1.y = point.y
ScreenToClient(*(data_bac454 + 4), &point_1)
void* eax_5 = data_bac454
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetClientRect(*(eax_5 + 4), &rect)
int32_t result = point_1.x

if (rect.left s<= result && result s< rect.right)
    result = point_1.y
    
    if (rect.top s<= result && result s< rect.bottom)
        result = sub_683b40()
        
        if (result.b == 0)
            result = sub_5b9f90()
            
            if (result.b == 0)
                if (sub_620c00() != 0)
                    int32_t edx_1 = *(data_bac458 + 0x348)
                    
                    if (edx_1 s< 0)
                        hCursor = LoadCursorW(nullptr, 0x7f00)
                    else
                        void* esi = data_bac510
                        
                        if (*(esi + 0xb58c) s<= edx_1)
                            hCursor = LoadCursorW(nullptr, 0x7f00)
                        else
                            int32_t* edi_1 = *data_bac43c + edx_1 * 0xc
                            int32_t ecx_1 = *edi_1
                            
                            if (ecx_1 == 0)
                                hCursor = LoadCursorW(nullptr, 0x7f00)
                            else
                                uint32_t edx_2 = 0
                                int32_t esi_1 = *(esi + edx_1 * 0x1c + 0x99a4)
                                
                                if (esi_1 != 0)
                                    edx_2 = modu.dp.d(0:(divu.dp.d(edx_2:arg1, esi_1)), edi_1[2])
                                
                                hCursor = *(ecx_1 + (edx_2 << 3))
                
                result = GetCursor()
                
                if (result != hCursor)
                    result = SetCursor(hCursor)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
