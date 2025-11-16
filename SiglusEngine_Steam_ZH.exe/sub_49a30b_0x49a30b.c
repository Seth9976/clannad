// 函数: sub_49a30b
// 地址: 0x49a30b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* esi = arg1
char eax = (esi[0x16]).b
char const* const __saved_ebx_1

if ((eax & 1) != 0)
    if ((eax & 4) != 0)
        sub_46693e(esi, "Invalid PLTE after IDAT")
        return sub_49a08a(esi, arg3)
    
    if ((eax & 2) == 0)
        int32_t eax_1 = arg3
        esi[0x16] |= 2
        
        if (modu.dp.d(0:eax_1, 3) != 0)
            if (*(esi + 0x116) == 3)
                sub_46691d(esi, "Invalid palette chunk")
                noreturn
            
            sub_46693e(esi, "Invalid palette chunk")
            return sub_49a08a(esi, arg3)
        
        int32_t edi
        int32_t var_14_3 = edi
        int32_t temp0_2 = divs.dp.d(sx.q(arg3), 3)
        void* eax_6 = sub_466a0b(esi, temp0_2, 3)
        *(esi + 0x5d) |= 0x10
        
        if (temp0_2 s> 0)
            void* edi_1 = eax_6 + 2
            arg1 = temp0_2
            int32_t i
            
            do
                sub_4997a6(esi, &arg3, 3)
                *(edi_1 - 2) = arg3.b
                *(edi_1 - 1) = arg3:1.b
                *edi_1 = arg3:2.b
                edi_1 += 3
                i = arg1
                arg1 -= 1
            while (i != 1)
        
        sub_49a08a(esi, 0)
        esi[0x41] = eax_6
        esi[0x42].w = temp0_2.w
        int16_t result = sub_466bcf(esi, arg2, eax_6, temp0_2.w)
        
        if (*(esi + 0x116) == 3 && arg2 != 0 && (*(arg2 + 8) & 0x10) != 0)
            result = *(esi + 0x10a)
            
            if (result u> esi[0x42].w)
                sub_46693e(esi, "Truncating incorrect tRNS chunk length")
                result = esi[0x42].w
                *(esi + 0x10a) = result
        
        return result
    
    __saved_ebx_1 = "Duplicate PLTE chunk"
else
    __saved_ebx_1 = "Missing IHDR before PLTE"

sub_46691d(esi, __saved_ebx_1)
noreturn
