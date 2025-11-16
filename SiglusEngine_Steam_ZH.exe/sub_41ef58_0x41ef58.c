// 函数: sub_41ef58
// 地址: 0x41ef58
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
float* ebx = nullptr
int32_t edi
int32_t var_18 = edi

if (*(arg1 + 0x14) == 0)
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
    var_8.w = temp0_1
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16(var_8.w | 0xc00)
    *(arg1 + 0x7c) = var_8
    int32_t eax_18 = *(arg1 + 8)
    
    if (eax_18 == 1 || eax_18 == 4)
        int32_t i = 0
        
        if (*(arg1 + 0x68) u> 0)
            void* edi_6 = arg3 + 8
            
            do
                void* var_1c_11 = arg1
                *(ebx + *(arg1 + 0x58)) =
                    fconvert.s(sub_41ea3d(fconvert.s(fconvert.t(*(edi_6 - 8)))))
                void* var_1c_13 = arg1
                *(ebx + *(arg1 + 0x58) + 4) =
                    fconvert.s(sub_41ea3d(fconvert.s(fconvert.t(*(edi_6 - 4)))))
                void* var_1c_15 = arg1
                i += 1
                *(ebx + *(arg1 + 0x58) + 8) = fconvert.s(sub_41ea3d(fconvert.s(fconvert.t(*edi_6))))
                *(ebx + *(arg1 + 0x58) + 0xc) = fconvert.s(fconvert.t(*(edi_6 + 4)))
                ebx = &ebx[4]
                edi_6 += 0x10
            while (i u< *(arg1 + 0x68))
    else
        int32_t i_1 = 0
        
        if (*(arg1 + 0x68) u> 0)
            void* edi_4 = arg3 + 8
            
            do
                *(ebx + *(arg1 + 0x58)) = fconvert.s(fconvert.t(*(edi_4 - 8)))
                void* var_1c_9 = arg1
                *(ebx + *(arg1 + 0x58) + 4) = fconvert.s(fconvert.t(*(edi_4 - 4)))
                *(ebx + *(arg1 + 0x58) + 8) = fconvert.s(fconvert.t(*edi_4))
                i_1 += 1
                *(ebx + *(arg1 + 0x58) + 0xc) =
                    fconvert.s(sub_41ea3d(fconvert.s(fconvert.t(*(edi_4 + 4)))))
                ebx = &ebx[4]
                edi_4 += 0x10
            while (i_1 u< *(arg1 + 0x68))
    
    int16_t x87control_1
    int16_t x87status_3
    x87control_1, x87status_3 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
else
    int32_t eax = *(arg1 + 8)
    
    if (eax == 1 || eax == 4)
        int32_t i_2 = 0
        
        if (*(arg1 + 0x68) u> 0)
            void* edi_2 = arg3 + 8
            
            do
                void* var_1c_3 = arg1
                void* ebx_2 = 0xfffffff8 - arg3 + edi_2
                void* var_1c_5 = arg1
                *(ebx_2 + *(arg1 + 0x58)) = fconvert.s(
                    sub_4644d2(fconvert.s(fconvert.t(*(edi_2 - 8)))) * fconvert.t(*(edi_2 - 8)))
                void* var_1c_7 = arg1
                *(ebx_2 + *(arg1 + 0x58) + 4) = fconvert.s(
                    sub_4644d2(fconvert.s(fconvert.t(*(edi_2 - 4)))) * fconvert.t(*(edi_2 - 4)))
                long double x87_r7_15 =
                    sub_4644d2(fconvert.s(fconvert.t(*edi_2))) * fconvert.t(*edi_2)
                i_2 += 1
                edi_2 += 0x10
                *(ebx_2 + *(arg1 + 0x58) + 8) = fconvert.s(x87_r7_15)
                *(ebx_2 + *(arg1 + 0x58) + 0xc) = fconvert.s(fconvert.t(*(edi_2 - 0xc)))
            while (i_2 u< *(arg1 + 0x68))
    else
        int32_t i_3 = 0
        
        if (*(arg1 + 0x68) u> 0)
            void* edi_1 = arg3 + 0xc
            
            do
                void* ebx_1 = 0xfffffff4 - arg3 + edi_1
                *(ebx_1 + *(arg1 + 0x58)) = fconvert.s(fconvert.t(*(edi_1 - 0xc)))
                void* var_1c_1 = arg1
                *(*(arg1 + 0x58) + ebx_1 + 4) = fconvert.s(fconvert.t(*(edi_1 - 8)))
                *(*(arg1 + 0x58) + ebx_1 + 8) = fconvert.s(fconvert.t(*(edi_1 - 4)))
                long double x87_r7_6 =
                    sub_4644d2(fconvert.s(fconvert.t(*edi_1))) * fconvert.t(*edi_1)
                i_3 += 1
                edi_1 += 0x10
                *(*(arg1 + 0x58) + ebx_1 + 0xc) = fconvert.s(x87_r7_6)
            while (i_3 u< *(arg1 + 0x68))

return *(arg1 + 0x58)
