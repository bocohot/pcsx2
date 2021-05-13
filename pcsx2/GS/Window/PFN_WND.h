/*  PCSX2 - PS2 Emulator for PCs
 *  Copyright (C) 2002-2021 PCSX2 Dev Team
 *
 *  PCSX2 is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU Lesser General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  PCSX2 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with PCSX2.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#if defined(ENABLE_GL_ARB_ES3_2_compatibility) && defined(GL_ARB_ES3_2_compatibility)
GL_EXT_LOAD_OPT(glPrimitiveBoundingBoxARB);
#endif
#if defined(ENABLE_GL_ARB_bindless_texture) && defined(GL_ARB_bindless_texture)
GL_EXT_LOAD_OPT(glGetTextureHandleARB);
GL_EXT_LOAD_OPT(glGetTextureSamplerHandleARB);
GL_EXT_LOAD_OPT(glMakeTextureHandleResidentARB);
GL_EXT_LOAD_OPT(glMakeTextureHandleNonResidentARB);
GL_EXT_LOAD_OPT(glGetImageHandleARB);
GL_EXT_LOAD_OPT(glMakeImageHandleResidentARB);
GL_EXT_LOAD_OPT(glMakeImageHandleNonResidentARB);
GL_EXT_LOAD_OPT(glUniformHandleui64ARB);
GL_EXT_LOAD_OPT(glUniformHandleui64vARB);
GL_EXT_LOAD_OPT(glProgramUniformHandleui64ARB);
GL_EXT_LOAD_OPT(glProgramUniformHandleui64vARB);
GL_EXT_LOAD_OPT(glIsTextureHandleResidentARB);
GL_EXT_LOAD_OPT(glIsImageHandleResidentARB);
GL_EXT_LOAD_OPT(glVertexAttribL1ui64ARB);
GL_EXT_LOAD_OPT(glVertexAttribL1ui64vARB);
GL_EXT_LOAD_OPT(glGetVertexAttribLui64vARB);
#endif
#if defined(ENABLE_GL_ARB_cl_event) && defined(GL_ARB_cl_event)
GL_EXT_LOAD_OPT(glCreateSyncFromCLeventARB);
#endif
#if defined(ENABLE_GL_ARB_compute_variable_group_size) && defined(GL_ARB_compute_variable_group_size)
GL_EXT_LOAD_OPT(glDispatchComputeGroupSizeARB);
#endif
#if defined(ENABLE_GL_ARB_debug_output) && defined(GL_ARB_debug_output)
GL_EXT_LOAD_OPT(glDebugMessageControlARB);
GL_EXT_LOAD_OPT(glDebugMessageInsertARB);
GL_EXT_LOAD_OPT(glDebugMessageCallbackARB);
GL_EXT_LOAD_OPT(glGetDebugMessageLogARB);
#endif
#if defined(ENABLE_GL_ARB_draw_buffers_blend) && defined(GL_ARB_draw_buffers_blend)
GL_EXT_LOAD_OPT(glBlendEquationiARB);
GL_EXT_LOAD_OPT(glBlendEquationSeparateiARB);
GL_EXT_LOAD_OPT(glBlendFunciARB);
GL_EXT_LOAD_OPT(glBlendFuncSeparateiARB);
#endif
#if defined(ENABLE_GL_ARB_draw_instanced) && defined(GL_ARB_draw_instanced)
GL_EXT_LOAD_OPT(glDrawArraysInstancedARB);
GL_EXT_LOAD_OPT(glDrawElementsInstancedARB);
#endif
#if defined(ENABLE_GL_ARB_geometry_shader4) && defined(GL_ARB_geometry_shader4)
GL_EXT_LOAD_OPT(glProgramParameteriARB);
GL_EXT_LOAD_OPT(glFramebufferTextureARB);
GL_EXT_LOAD_OPT(glFramebufferTextureLayerARB);
GL_EXT_LOAD_OPT(glFramebufferTextureFaceARB);
#endif
#if defined(ENABLE_GL_ARB_gl_spirv) && defined(GL_ARB_gl_spirv)
GL_EXT_LOAD_OPT(glSpecializeShaderARB);
#endif
#if defined(ENABLE_GL_ARB_gpu_shader_int64) && defined(GL_ARB_gpu_shader_int64)
GL_EXT_LOAD_OPT(glUniform1i64ARB);
GL_EXT_LOAD_OPT(glUniform2i64ARB);
GL_EXT_LOAD_OPT(glUniform3i64ARB);
GL_EXT_LOAD_OPT(glUniform4i64ARB);
GL_EXT_LOAD_OPT(glUniform1i64vARB);
GL_EXT_LOAD_OPT(glUniform2i64vARB);
GL_EXT_LOAD_OPT(glUniform3i64vARB);
GL_EXT_LOAD_OPT(glUniform4i64vARB);
GL_EXT_LOAD_OPT(glUniform1ui64ARB);
GL_EXT_LOAD_OPT(glUniform2ui64ARB);
GL_EXT_LOAD_OPT(glUniform3ui64ARB);
GL_EXT_LOAD_OPT(glUniform4ui64ARB);
GL_EXT_LOAD_OPT(glUniform1ui64vARB);
GL_EXT_LOAD_OPT(glUniform2ui64vARB);
GL_EXT_LOAD_OPT(glUniform3ui64vARB);
GL_EXT_LOAD_OPT(glUniform4ui64vARB);
GL_EXT_LOAD_OPT(glGetUniformi64vARB);
GL_EXT_LOAD_OPT(glGetUniformui64vARB);
GL_EXT_LOAD_OPT(glGetnUniformi64vARB);
GL_EXT_LOAD_OPT(glGetnUniformui64vARB);
GL_EXT_LOAD_OPT(glProgramUniform1i64ARB);
GL_EXT_LOAD_OPT(glProgramUniform2i64ARB);
GL_EXT_LOAD_OPT(glProgramUniform3i64ARB);
GL_EXT_LOAD_OPT(glProgramUniform4i64ARB);
GL_EXT_LOAD_OPT(glProgramUniform1i64vARB);
GL_EXT_LOAD_OPT(glProgramUniform2i64vARB);
GL_EXT_LOAD_OPT(glProgramUniform3i64vARB);
GL_EXT_LOAD_OPT(glProgramUniform4i64vARB);
GL_EXT_LOAD_OPT(glProgramUniform1ui64ARB);
GL_EXT_LOAD_OPT(glProgramUniform2ui64ARB);
GL_EXT_LOAD_OPT(glProgramUniform3ui64ARB);
GL_EXT_LOAD_OPT(glProgramUniform4ui64ARB);
GL_EXT_LOAD_OPT(glProgramUniform1ui64vARB);
GL_EXT_LOAD_OPT(glProgramUniform2ui64vARB);
GL_EXT_LOAD_OPT(glProgramUniform3ui64vARB);
GL_EXT_LOAD_OPT(glProgramUniform4ui64vARB);
#endif
#if defined(ENABLE_GL_ARB_indirect_parameters) && defined(GL_ARB_indirect_parameters)
GL_EXT_LOAD_OPT(glMultiDrawArraysIndirectCountARB);
GL_EXT_LOAD_OPT(glMultiDrawElementsIndirectCountARB);
#endif
#if defined(ENABLE_GL_ARB_instanced_arrays) && defined(GL_ARB_instanced_arrays)
GL_EXT_LOAD_OPT(glVertexAttribDivisorARB);
#endif
#if defined(ENABLE_GL_ARB_parallel_shader_compile) && defined(GL_ARB_parallel_shader_compile)
GL_EXT_LOAD_OPT(glMaxShaderCompilerThreadsARB);
#endif
#if defined(ENABLE_GL_ARB_robustness) && defined(GL_ARB_robustness)
GL_EXT_LOAD_OPT(glGetGraphicsResetStatusARB);
GL_EXT_LOAD_OPT(glGetnTexImageARB);
GL_EXT_LOAD_OPT(glReadnPixelsARB);
GL_EXT_LOAD_OPT(glGetnCompressedTexImageARB);
GL_EXT_LOAD_OPT(glGetnUniformfvARB);
GL_EXT_LOAD_OPT(glGetnUniformivARB);
GL_EXT_LOAD_OPT(glGetnUniformuivARB);
GL_EXT_LOAD_OPT(glGetnUniformdvARB);
#endif
#if defined(ENABLE_GL_ARB_sample_locations) && defined(GL_ARB_sample_locations)
GL_EXT_LOAD_OPT(glFramebufferSampleLocationsfvARB);
GL_EXT_LOAD_OPT(glNamedFramebufferSampleLocationsfvARB);
GL_EXT_LOAD_OPT(glEvaluateDepthValuesARB);
#endif
#if defined(ENABLE_GL_ARB_sample_shading) && defined(GL_ARB_sample_shading)
GL_EXT_LOAD_OPT(glMinSampleShadingARB);
#endif
#if defined(ENABLE_GL_ARB_shading_language_include) && defined(GL_ARB_shading_language_include)
GL_EXT_LOAD_OPT(glNamedStringARB);
GL_EXT_LOAD_OPT(glDeleteNamedStringARB);
GL_EXT_LOAD_OPT(glCompileShaderIncludeARB);
GL_EXT_LOAD_OPT(glIsNamedStringARB);
GL_EXT_LOAD_OPT(glGetNamedStringARB);
GL_EXT_LOAD_OPT(glGetNamedStringivARB);
#endif
#if defined(ENABLE_GL_ARB_sparse_buffer) && defined(GL_ARB_sparse_buffer)
GL_EXT_LOAD_OPT(glBufferPageCommitmentARB);
GL_EXT_LOAD_OPT(glNamedBufferPageCommitmentEXT);
GL_EXT_LOAD_OPT(glNamedBufferPageCommitmentARB);
#endif
#if defined(ENABLE_GL_ARB_sparse_texture) && defined(GL_ARB_sparse_texture)
GL_EXT_LOAD_OPT(glTexPageCommitmentARB);
#endif
#if defined(ENABLE_GL_ARB_texture_buffer_object) && defined(GL_ARB_texture_buffer_object)
GL_EXT_LOAD_OPT(glTexBufferARB);
#endif
#if defined(ENABLE_GL_KHR_blend_equation_advanced) && defined(GL_KHR_blend_equation_advanced)
GL_EXT_LOAD_OPT(glBlendBarrierKHR);
#endif
#if defined(ENABLE_GL_KHR_parallel_shader_compile) && defined(GL_KHR_parallel_shader_compile)
GL_EXT_LOAD_OPT(glMaxShaderCompilerThreadsKHR);
#endif
#if defined(ENABLE_GL_VERSION_1_0) && defined(GL_VERSION_1_0)
GL_EXT_LOAD_OPT(glCullFace);
GL_EXT_LOAD_OPT(glFrontFace);
GL_EXT_LOAD_OPT(glHint);
GL_EXT_LOAD_OPT(glLineWidth);
GL_EXT_LOAD_OPT(glPointSize);
GL_EXT_LOAD_OPT(glPolygonMode);
GL_EXT_LOAD_OPT(glScissor);
GL_EXT_LOAD_OPT(glTexParameterf);
GL_EXT_LOAD_OPT(glTexParameterfv);
GL_EXT_LOAD_OPT(glTexParameteri);
GL_EXT_LOAD_OPT(glTexParameteriv);
GL_EXT_LOAD_OPT(glTexImage1D);
GL_EXT_LOAD_OPT(glTexImage2D);
GL_EXT_LOAD_OPT(glDrawBuffer);
GL_EXT_LOAD_OPT(glClear);
GL_EXT_LOAD_OPT(glClearColor);
GL_EXT_LOAD_OPT(glClearStencil);
GL_EXT_LOAD_OPT(glClearDepth);
GL_EXT_LOAD_OPT(glStencilMask);
GL_EXT_LOAD_OPT(glColorMask);
GL_EXT_LOAD_OPT(glDepthMask);
GL_EXT_LOAD_OPT(glDisable);
GL_EXT_LOAD_OPT(glEnable);
GL_EXT_LOAD_OPT(glFinish);
GL_EXT_LOAD_OPT(glFlush);
GL_EXT_LOAD_OPT(glBlendFunc);
GL_EXT_LOAD_OPT(glLogicOp);
GL_EXT_LOAD_OPT(glStencilFunc);
GL_EXT_LOAD_OPT(glStencilOp);
GL_EXT_LOAD_OPT(glDepthFunc);
GL_EXT_LOAD_OPT(glPixelStoref);
GL_EXT_LOAD_OPT(glPixelStorei);
GL_EXT_LOAD_OPT(glReadBuffer);
GL_EXT_LOAD_OPT(glReadPixels);
GL_EXT_LOAD_OPT(glGetBooleanv);
GL_EXT_LOAD_OPT(glGetDoublev);
GL_EXT_LOAD_OPT(glGetError);
GL_EXT_LOAD_OPT(glGetFloatv);
GL_EXT_LOAD_OPT(glGetIntegerv);
GL_EXT_LOAD_OPT(glGetString);
GL_EXT_LOAD_OPT(glGetTexImage);
GL_EXT_LOAD_OPT(glGetTexParameterfv);
GL_EXT_LOAD_OPT(glGetTexParameteriv);
GL_EXT_LOAD_OPT(glGetTexLevelParameterfv);
GL_EXT_LOAD_OPT(glGetTexLevelParameteriv);
GL_EXT_LOAD_OPT(glIsEnabled);
GL_EXT_LOAD_OPT(glDepthRange);
GL_EXT_LOAD_OPT(glViewport);
#endif
#if defined(ENABLE_GL_VERSION_1_1) && defined(GL_VERSION_1_1)
GL_EXT_LOAD_OPT(glDrawArrays);
GL_EXT_LOAD_OPT(glDrawElements);
GL_EXT_LOAD_OPT(glGetPointerv);
GL_EXT_LOAD_OPT(glPolygonOffset);
GL_EXT_LOAD_OPT(glCopyTexImage1D);
GL_EXT_LOAD_OPT(glCopyTexImage2D);
GL_EXT_LOAD_OPT(glCopyTexSubImage1D);
GL_EXT_LOAD_OPT(glCopyTexSubImage2D);
GL_EXT_LOAD_OPT(glTexSubImage1D);
GL_EXT_LOAD_OPT(glTexSubImage2D);
GL_EXT_LOAD_OPT(glBindTexture);
GL_EXT_LOAD_OPT(glDeleteTextures);
GL_EXT_LOAD_OPT(glGenTextures);
GL_EXT_LOAD_OPT(glIsTexture);
#endif
#if defined(ENABLE_GL_VERSION_1_2) && defined(GL_VERSION_1_2)
GL_EXT_LOAD_OPT(glDrawRangeElements);
GL_EXT_LOAD_OPT(glTexImage3D);
GL_EXT_LOAD_OPT(glTexSubImage3D);
GL_EXT_LOAD_OPT(glCopyTexSubImage3D);
#endif
#if defined(ENABLE_GL_VERSION_1_3) && defined(GL_VERSION_1_3)
GL_EXT_LOAD_OPT(glActiveTexture);
GL_EXT_LOAD_OPT(glSampleCoverage);
GL_EXT_LOAD_OPT(glCompressedTexImage3D);
GL_EXT_LOAD_OPT(glCompressedTexImage2D);
GL_EXT_LOAD_OPT(glCompressedTexImage1D);
GL_EXT_LOAD_OPT(glCompressedTexSubImage3D);
GL_EXT_LOAD_OPT(glCompressedTexSubImage2D);
GL_EXT_LOAD_OPT(glCompressedTexSubImage1D);
GL_EXT_LOAD_OPT(glGetCompressedTexImage);
#endif
#if defined(ENABLE_GL_VERSION_1_4) && defined(GL_VERSION_1_4)
GL_EXT_LOAD_OPT(glBlendFuncSeparate);
GL_EXT_LOAD_OPT(glMultiDrawArrays);
GL_EXT_LOAD_OPT(glMultiDrawElements);
GL_EXT_LOAD_OPT(glPointParameterf);
GL_EXT_LOAD_OPT(glPointParameterfv);
GL_EXT_LOAD_OPT(glPointParameteri);
GL_EXT_LOAD_OPT(glPointParameteriv);
GL_EXT_LOAD_OPT(glBlendColor);
GL_EXT_LOAD_OPT(glBlendEquation);
#endif
#if defined(ENABLE_GL_VERSION_1_5) && defined(GL_VERSION_1_5)
GL_EXT_LOAD_OPT(glGenQueries);
GL_EXT_LOAD_OPT(glDeleteQueries);
GL_EXT_LOAD_OPT(glIsQuery);
GL_EXT_LOAD_OPT(glBeginQuery);
GL_EXT_LOAD_OPT(glEndQuery);
GL_EXT_LOAD_OPT(glGetQueryiv);
GL_EXT_LOAD_OPT(glGetQueryObjectiv);
GL_EXT_LOAD_OPT(glGetQueryObjectuiv);
GL_EXT_LOAD_OPT(glBindBuffer);
GL_EXT_LOAD_OPT(glDeleteBuffers);
GL_EXT_LOAD_OPT(glGenBuffers);
GL_EXT_LOAD_OPT(glIsBuffer);
GL_EXT_LOAD_OPT(glBufferData);
GL_EXT_LOAD_OPT(glBufferSubData);
GL_EXT_LOAD_OPT(glGetBufferSubData);
GL_EXT_LOAD_OPT(glMapBuffer);
GL_EXT_LOAD_OPT(glUnmapBuffer);
GL_EXT_LOAD_OPT(glGetBufferParameteriv);
GL_EXT_LOAD_OPT(glGetBufferPointerv);
#endif
#if defined(ENABLE_GL_VERSION_2_0) && defined(GL_VERSION_2_0)
GL_EXT_LOAD_OPT(glBlendEquationSeparate);
GL_EXT_LOAD_OPT(glDrawBuffers);
GL_EXT_LOAD_OPT(glStencilOpSeparate);
GL_EXT_LOAD_OPT(glStencilFuncSeparate);
GL_EXT_LOAD_OPT(glStencilMaskSeparate);
GL_EXT_LOAD_OPT(glAttachShader);
GL_EXT_LOAD_OPT(glBindAttribLocation);
GL_EXT_LOAD_OPT(glCompileShader);
GL_EXT_LOAD_OPT(glCreateProgram);
GL_EXT_LOAD_OPT(glCreateShader);
GL_EXT_LOAD_OPT(glDeleteProgram);
GL_EXT_LOAD_OPT(glDeleteShader);
GL_EXT_LOAD_OPT(glDetachShader);
GL_EXT_LOAD_OPT(glDisableVertexAttribArray);
GL_EXT_LOAD_OPT(glEnableVertexAttribArray);
GL_EXT_LOAD_OPT(glGetActiveAttrib);
GL_EXT_LOAD_OPT(glGetActiveUniform);
GL_EXT_LOAD_OPT(glGetAttachedShaders);
GL_EXT_LOAD_OPT(glGetAttribLocation);
GL_EXT_LOAD_OPT(glGetProgramiv);
GL_EXT_LOAD_OPT(glGetProgramInfoLog);
GL_EXT_LOAD_OPT(glGetShaderiv);
GL_EXT_LOAD_OPT(glGetShaderInfoLog);
GL_EXT_LOAD_OPT(glGetShaderSource);
GL_EXT_LOAD_OPT(glGetUniformLocation);
GL_EXT_LOAD_OPT(glGetUniformfv);
GL_EXT_LOAD_OPT(glGetUniformiv);
GL_EXT_LOAD_OPT(glGetVertexAttribdv);
GL_EXT_LOAD_OPT(glGetVertexAttribfv);
GL_EXT_LOAD_OPT(glGetVertexAttribiv);
GL_EXT_LOAD_OPT(glGetVertexAttribPointerv);
GL_EXT_LOAD_OPT(glIsProgram);
GL_EXT_LOAD_OPT(glIsShader);
GL_EXT_LOAD_OPT(glLinkProgram);
GL_EXT_LOAD_OPT(glShaderSource);
GL_EXT_LOAD_OPT(glUseProgram);
GL_EXT_LOAD_OPT(glUniform1f);
GL_EXT_LOAD_OPT(glUniform2f);
GL_EXT_LOAD_OPT(glUniform3f);
GL_EXT_LOAD_OPT(glUniform4f);
GL_EXT_LOAD_OPT(glUniform1i);
GL_EXT_LOAD_OPT(glUniform2i);
GL_EXT_LOAD_OPT(glUniform3i);
GL_EXT_LOAD_OPT(glUniform4i);
GL_EXT_LOAD_OPT(glUniform1fv);
GL_EXT_LOAD_OPT(glUniform2fv);
GL_EXT_LOAD_OPT(glUniform3fv);
GL_EXT_LOAD_OPT(glUniform4fv);
GL_EXT_LOAD_OPT(glUniform1iv);
GL_EXT_LOAD_OPT(glUniform2iv);
GL_EXT_LOAD_OPT(glUniform3iv);
GL_EXT_LOAD_OPT(glUniform4iv);
GL_EXT_LOAD_OPT(glUniformMatrix2fv);
GL_EXT_LOAD_OPT(glUniformMatrix3fv);
GL_EXT_LOAD_OPT(glUniformMatrix4fv);
GL_EXT_LOAD_OPT(glValidateProgram);
GL_EXT_LOAD_OPT(glVertexAttrib1d);
GL_EXT_LOAD_OPT(glVertexAttrib1dv);
GL_EXT_LOAD_OPT(glVertexAttrib1f);
GL_EXT_LOAD_OPT(glVertexAttrib1fv);
GL_EXT_LOAD_OPT(glVertexAttrib1s);
GL_EXT_LOAD_OPT(glVertexAttrib1sv);
GL_EXT_LOAD_OPT(glVertexAttrib2d);
GL_EXT_LOAD_OPT(glVertexAttrib2dv);
GL_EXT_LOAD_OPT(glVertexAttrib2f);
GL_EXT_LOAD_OPT(glVertexAttrib2fv);
GL_EXT_LOAD_OPT(glVertexAttrib2s);
GL_EXT_LOAD_OPT(glVertexAttrib2sv);
GL_EXT_LOAD_OPT(glVertexAttrib3d);
GL_EXT_LOAD_OPT(glVertexAttrib3dv);
GL_EXT_LOAD_OPT(glVertexAttrib3f);
GL_EXT_LOAD_OPT(glVertexAttrib3fv);
GL_EXT_LOAD_OPT(glVertexAttrib3s);
GL_EXT_LOAD_OPT(glVertexAttrib3sv);
GL_EXT_LOAD_OPT(glVertexAttrib4Nbv);
GL_EXT_LOAD_OPT(glVertexAttrib4Niv);
GL_EXT_LOAD_OPT(glVertexAttrib4Nsv);
GL_EXT_LOAD_OPT(glVertexAttrib4Nub);
GL_EXT_LOAD_OPT(glVertexAttrib4Nubv);
GL_EXT_LOAD_OPT(glVertexAttrib4Nuiv);
GL_EXT_LOAD_OPT(glVertexAttrib4Nusv);
GL_EXT_LOAD_OPT(glVertexAttrib4bv);
GL_EXT_LOAD_OPT(glVertexAttrib4d);
GL_EXT_LOAD_OPT(glVertexAttrib4dv);
GL_EXT_LOAD_OPT(glVertexAttrib4f);
GL_EXT_LOAD_OPT(glVertexAttrib4fv);
GL_EXT_LOAD_OPT(glVertexAttrib4iv);
GL_EXT_LOAD_OPT(glVertexAttrib4s);
GL_EXT_LOAD_OPT(glVertexAttrib4sv);
GL_EXT_LOAD_OPT(glVertexAttrib4ubv);
GL_EXT_LOAD_OPT(glVertexAttrib4uiv);
GL_EXT_LOAD_OPT(glVertexAttrib4usv);
GL_EXT_LOAD_OPT(glVertexAttribPointer);
#endif
#if defined(ENABLE_GL_VERSION_2_1) && defined(GL_VERSION_2_1)
GL_EXT_LOAD_OPT(glUniformMatrix2x3fv);
GL_EXT_LOAD_OPT(glUniformMatrix3x2fv);
GL_EXT_LOAD_OPT(glUniformMatrix2x4fv);
GL_EXT_LOAD_OPT(glUniformMatrix4x2fv);
GL_EXT_LOAD_OPT(glUniformMatrix3x4fv);
GL_EXT_LOAD_OPT(glUniformMatrix4x3fv);
#endif
#if defined(ENABLE_GL_VERSION_3_0) && defined(GL_VERSION_3_0)
GL_EXT_LOAD_OPT(glColorMaski);
GL_EXT_LOAD_OPT(glGetBooleani_v);
GL_EXT_LOAD_OPT(glGetIntegeri_v);
GL_EXT_LOAD_OPT(glEnablei);
GL_EXT_LOAD_OPT(glDisablei);
GL_EXT_LOAD_OPT(glIsEnabledi);
GL_EXT_LOAD_OPT(glBeginTransformFeedback);
GL_EXT_LOAD_OPT(glEndTransformFeedback);
GL_EXT_LOAD_OPT(glBindBufferRange);
GL_EXT_LOAD_OPT(glBindBufferBase);
GL_EXT_LOAD_OPT(glTransformFeedbackVaryings);
GL_EXT_LOAD_OPT(glGetTransformFeedbackVarying);
GL_EXT_LOAD_OPT(glClampColor);
GL_EXT_LOAD_OPT(glBeginConditionalRender);
GL_EXT_LOAD_OPT(glEndConditionalRender);
GL_EXT_LOAD_OPT(glVertexAttribIPointer);
GL_EXT_LOAD_OPT(glGetVertexAttribIiv);
GL_EXT_LOAD_OPT(glGetVertexAttribIuiv);
GL_EXT_LOAD_OPT(glVertexAttribI1i);
GL_EXT_LOAD_OPT(glVertexAttribI2i);
GL_EXT_LOAD_OPT(glVertexAttribI3i);
GL_EXT_LOAD_OPT(glVertexAttribI4i);
GL_EXT_LOAD_OPT(glVertexAttribI1ui);
GL_EXT_LOAD_OPT(glVertexAttribI2ui);
GL_EXT_LOAD_OPT(glVertexAttribI3ui);
GL_EXT_LOAD_OPT(glVertexAttribI4ui);
GL_EXT_LOAD_OPT(glVertexAttribI1iv);
GL_EXT_LOAD_OPT(glVertexAttribI2iv);
GL_EXT_LOAD_OPT(glVertexAttribI3iv);
GL_EXT_LOAD_OPT(glVertexAttribI4iv);
GL_EXT_LOAD_OPT(glVertexAttribI1uiv);
GL_EXT_LOAD_OPT(glVertexAttribI2uiv);
GL_EXT_LOAD_OPT(glVertexAttribI3uiv);
GL_EXT_LOAD_OPT(glVertexAttribI4uiv);
GL_EXT_LOAD_OPT(glVertexAttribI4bv);
GL_EXT_LOAD_OPT(glVertexAttribI4sv);
GL_EXT_LOAD_OPT(glVertexAttribI4ubv);
GL_EXT_LOAD_OPT(glVertexAttribI4usv);
GL_EXT_LOAD_OPT(glGetUniformuiv);
GL_EXT_LOAD_OPT(glBindFragDataLocation);
GL_EXT_LOAD_OPT(glGetFragDataLocation);
GL_EXT_LOAD_OPT(glUniform1ui);
GL_EXT_LOAD_OPT(glUniform2ui);
GL_EXT_LOAD_OPT(glUniform3ui);
GL_EXT_LOAD_OPT(glUniform4ui);
GL_EXT_LOAD_OPT(glUniform1uiv);
GL_EXT_LOAD_OPT(glUniform2uiv);
GL_EXT_LOAD_OPT(glUniform3uiv);
GL_EXT_LOAD_OPT(glUniform4uiv);
GL_EXT_LOAD_OPT(glTexParameterIiv);
GL_EXT_LOAD_OPT(glTexParameterIuiv);
GL_EXT_LOAD_OPT(glGetTexParameterIiv);
GL_EXT_LOAD_OPT(glGetTexParameterIuiv);
GL_EXT_LOAD_OPT(glClearBufferiv);
GL_EXT_LOAD_OPT(glClearBufferuiv);
GL_EXT_LOAD_OPT(glClearBufferfv);
GL_EXT_LOAD_OPT(glClearBufferfi);
GL_EXT_LOAD_OPT(glGetStringi);
GL_EXT_LOAD_OPT(glIsRenderbuffer);
GL_EXT_LOAD_OPT(glBindRenderbuffer);
GL_EXT_LOAD_OPT(glDeleteRenderbuffers);
GL_EXT_LOAD_OPT(glGenRenderbuffers);
GL_EXT_LOAD_OPT(glRenderbufferStorage);
GL_EXT_LOAD_OPT(glGetRenderbufferParameteriv);
GL_EXT_LOAD_OPT(glIsFramebuffer);
GL_EXT_LOAD_OPT(glBindFramebuffer);
GL_EXT_LOAD_OPT(glDeleteFramebuffers);
GL_EXT_LOAD_OPT(glGenFramebuffers);
GL_EXT_LOAD_OPT(glCheckFramebufferStatus);
GL_EXT_LOAD_OPT(glFramebufferTexture1D);
GL_EXT_LOAD_OPT(glFramebufferTexture2D);
GL_EXT_LOAD_OPT(glFramebufferTexture3D);
GL_EXT_LOAD_OPT(glFramebufferRenderbuffer);
GL_EXT_LOAD_OPT(glGetFramebufferAttachmentParameteriv);
GL_EXT_LOAD_OPT(glGenerateMipmap);
GL_EXT_LOAD_OPT(glBlitFramebuffer);
GL_EXT_LOAD_OPT(glRenderbufferStorageMultisample);
GL_EXT_LOAD_OPT(glFramebufferTextureLayer);
GL_EXT_LOAD_OPT(glMapBufferRange);
GL_EXT_LOAD_OPT(glFlushMappedBufferRange);
GL_EXT_LOAD_OPT(glBindVertexArray);
GL_EXT_LOAD_OPT(glDeleteVertexArrays);
GL_EXT_LOAD_OPT(glGenVertexArrays);
GL_EXT_LOAD_OPT(glIsVertexArray);
#endif
#if defined(ENABLE_GL_VERSION_3_1) && defined(GL_VERSION_3_1)
GL_EXT_LOAD_OPT(glDrawArraysInstanced);
GL_EXT_LOAD_OPT(glDrawElementsInstanced);
GL_EXT_LOAD_OPT(glTexBuffer);
GL_EXT_LOAD_OPT(glPrimitiveRestartIndex);
GL_EXT_LOAD_OPT(glCopyBufferSubData);
GL_EXT_LOAD_OPT(glGetUniformIndices);
GL_EXT_LOAD_OPT(glGetActiveUniformsiv);
GL_EXT_LOAD_OPT(glGetActiveUniformName);
GL_EXT_LOAD_OPT(glGetUniformBlockIndex);
GL_EXT_LOAD_OPT(glGetActiveUniformBlockiv);
GL_EXT_LOAD_OPT(glGetActiveUniformBlockName);
GL_EXT_LOAD_OPT(glUniformBlockBinding);
#endif
#if defined(ENABLE_GL_VERSION_3_2) && defined(GL_VERSION_3_2)
GL_EXT_LOAD_OPT(glDrawElementsBaseVertex);
GL_EXT_LOAD_OPT(glDrawRangeElementsBaseVertex);
GL_EXT_LOAD_OPT(glDrawElementsInstancedBaseVertex);
GL_EXT_LOAD_OPT(glMultiDrawElementsBaseVertex);
GL_EXT_LOAD_OPT(glProvokingVertex);
GL_EXT_LOAD_OPT(glFenceSync);
GL_EXT_LOAD_OPT(glIsSync);
GL_EXT_LOAD_OPT(glDeleteSync);
GL_EXT_LOAD_OPT(glClientWaitSync);
GL_EXT_LOAD_OPT(glWaitSync);
GL_EXT_LOAD_OPT(glGetInteger64v);
GL_EXT_LOAD_OPT(glGetSynciv);
GL_EXT_LOAD_OPT(glGetInteger64i_v);
GL_EXT_LOAD_OPT(glGetBufferParameteri64v);
GL_EXT_LOAD_OPT(glFramebufferTexture);
GL_EXT_LOAD_OPT(glTexImage2DMultisample);
GL_EXT_LOAD_OPT(glTexImage3DMultisample);
GL_EXT_LOAD_OPT(glGetMultisamplefv);
GL_EXT_LOAD_OPT(glSampleMaski);
#endif
#if defined(ENABLE_GL_VERSION_3_3) && defined(GL_VERSION_3_3)
GL_EXT_LOAD_OPT(glBindFragDataLocationIndexed);
GL_EXT_LOAD_OPT(glGetFragDataIndex);
GL_EXT_LOAD_OPT(glGenSamplers);
GL_EXT_LOAD_OPT(glDeleteSamplers);
GL_EXT_LOAD_OPT(glIsSampler);
GL_EXT_LOAD_OPT(glBindSampler);
GL_EXT_LOAD_OPT(glSamplerParameteri);
GL_EXT_LOAD_OPT(glSamplerParameteriv);
GL_EXT_LOAD_OPT(glSamplerParameterf);
GL_EXT_LOAD_OPT(glSamplerParameterfv);
GL_EXT_LOAD_OPT(glSamplerParameterIiv);
GL_EXT_LOAD_OPT(glSamplerParameterIuiv);
GL_EXT_LOAD_OPT(glGetSamplerParameteriv);
GL_EXT_LOAD_OPT(glGetSamplerParameterIiv);
GL_EXT_LOAD_OPT(glGetSamplerParameterfv);
GL_EXT_LOAD_OPT(glGetSamplerParameterIuiv);
GL_EXT_LOAD_OPT(glQueryCounter);
GL_EXT_LOAD_OPT(glGetQueryObjecti64v);
GL_EXT_LOAD_OPT(glGetQueryObjectui64v);
GL_EXT_LOAD_OPT(glVertexAttribDivisor);
GL_EXT_LOAD_OPT(glVertexAttribP1ui);
GL_EXT_LOAD_OPT(glVertexAttribP1uiv);
GL_EXT_LOAD_OPT(glVertexAttribP2ui);
GL_EXT_LOAD_OPT(glVertexAttribP2uiv);
GL_EXT_LOAD_OPT(glVertexAttribP3ui);
GL_EXT_LOAD_OPT(glVertexAttribP3uiv);
GL_EXT_LOAD_OPT(glVertexAttribP4ui);
GL_EXT_LOAD_OPT(glVertexAttribP4uiv);
#endif
#if defined(ENABLE_GL_VERSION_4_0) && defined(GL_VERSION_4_0)
GL_EXT_LOAD_OPT(glMinSampleShading);
GL_EXT_LOAD_OPT(glBlendEquationi);
GL_EXT_LOAD_OPT(glBlendEquationSeparatei);
GL_EXT_LOAD_OPT(glBlendFunci);
GL_EXT_LOAD_OPT(glBlendFuncSeparatei);
GL_EXT_LOAD_OPT(glDrawArraysIndirect);
GL_EXT_LOAD_OPT(glDrawElementsIndirect);
GL_EXT_LOAD_OPT(glUniform1d);
GL_EXT_LOAD_OPT(glUniform2d);
GL_EXT_LOAD_OPT(glUniform3d);
GL_EXT_LOAD_OPT(glUniform4d);
GL_EXT_LOAD_OPT(glUniform1dv);
GL_EXT_LOAD_OPT(glUniform2dv);
GL_EXT_LOAD_OPT(glUniform3dv);
GL_EXT_LOAD_OPT(glUniform4dv);
GL_EXT_LOAD_OPT(glUniformMatrix2dv);
GL_EXT_LOAD_OPT(glUniformMatrix3dv);
GL_EXT_LOAD_OPT(glUniformMatrix4dv);
GL_EXT_LOAD_OPT(glUniformMatrix2x3dv);
GL_EXT_LOAD_OPT(glUniformMatrix2x4dv);
GL_EXT_LOAD_OPT(glUniformMatrix3x2dv);
GL_EXT_LOAD_OPT(glUniformMatrix3x4dv);
GL_EXT_LOAD_OPT(glUniformMatrix4x2dv);
GL_EXT_LOAD_OPT(glUniformMatrix4x3dv);
GL_EXT_LOAD_OPT(glGetUniformdv);
GL_EXT_LOAD_OPT(glGetSubroutineUniformLocation);
GL_EXT_LOAD_OPT(glGetSubroutineIndex);
GL_EXT_LOAD_OPT(glGetActiveSubroutineUniformiv);
GL_EXT_LOAD_OPT(glGetActiveSubroutineUniformName);
GL_EXT_LOAD_OPT(glGetActiveSubroutineName);
GL_EXT_LOAD_OPT(glUniformSubroutinesuiv);
GL_EXT_LOAD_OPT(glGetUniformSubroutineuiv);
GL_EXT_LOAD_OPT(glGetProgramStageiv);
GL_EXT_LOAD_OPT(glPatchParameteri);
GL_EXT_LOAD_OPT(glPatchParameterfv);
GL_EXT_LOAD_OPT(glBindTransformFeedback);
GL_EXT_LOAD_OPT(glDeleteTransformFeedbacks);
GL_EXT_LOAD_OPT(glGenTransformFeedbacks);
GL_EXT_LOAD_OPT(glIsTransformFeedback);
GL_EXT_LOAD_OPT(glPauseTransformFeedback);
GL_EXT_LOAD_OPT(glResumeTransformFeedback);
GL_EXT_LOAD_OPT(glDrawTransformFeedback);
GL_EXT_LOAD_OPT(glDrawTransformFeedbackStream);
GL_EXT_LOAD_OPT(glBeginQueryIndexed);
GL_EXT_LOAD_OPT(glEndQueryIndexed);
GL_EXT_LOAD_OPT(glGetQueryIndexediv);
#endif
#if defined(ENABLE_GL_VERSION_4_1) && defined(GL_VERSION_4_1)
GL_EXT_LOAD_OPT(glReleaseShaderCompiler);
GL_EXT_LOAD_OPT(glShaderBinary);
GL_EXT_LOAD_OPT(glGetShaderPrecisionFormat);
GL_EXT_LOAD_OPT(glDepthRangef);
GL_EXT_LOAD_OPT(glClearDepthf);
GL_EXT_LOAD_OPT(glGetProgramBinary);
GL_EXT_LOAD_OPT(glProgramBinary);
GL_EXT_LOAD_OPT(glProgramParameteri);
GL_EXT_LOAD_OPT(glUseProgramStages);
GL_EXT_LOAD_OPT(glActiveShaderProgram);
GL_EXT_LOAD_OPT(glCreateShaderProgramv);
GL_EXT_LOAD_OPT(glBindProgramPipeline);
GL_EXT_LOAD_OPT(glDeleteProgramPipelines);
GL_EXT_LOAD_OPT(glGenProgramPipelines);
GL_EXT_LOAD_OPT(glIsProgramPipeline);
GL_EXT_LOAD_OPT(glGetProgramPipelineiv);
GL_EXT_LOAD_OPT(glProgramUniform1i);
GL_EXT_LOAD_OPT(glProgramUniform1iv);
GL_EXT_LOAD_OPT(glProgramUniform1f);
GL_EXT_LOAD_OPT(glProgramUniform1fv);
GL_EXT_LOAD_OPT(glProgramUniform1d);
GL_EXT_LOAD_OPT(glProgramUniform1dv);
GL_EXT_LOAD_OPT(glProgramUniform1ui);
GL_EXT_LOAD_OPT(glProgramUniform1uiv);
GL_EXT_LOAD_OPT(glProgramUniform2i);
GL_EXT_LOAD_OPT(glProgramUniform2iv);
GL_EXT_LOAD_OPT(glProgramUniform2f);
GL_EXT_LOAD_OPT(glProgramUniform2fv);
GL_EXT_LOAD_OPT(glProgramUniform2d);
GL_EXT_LOAD_OPT(glProgramUniform2dv);
GL_EXT_LOAD_OPT(glProgramUniform2ui);
GL_EXT_LOAD_OPT(glProgramUniform2uiv);
GL_EXT_LOAD_OPT(glProgramUniform3i);
GL_EXT_LOAD_OPT(glProgramUniform3iv);
GL_EXT_LOAD_OPT(glProgramUniform3f);
GL_EXT_LOAD_OPT(glProgramUniform3fv);
GL_EXT_LOAD_OPT(glProgramUniform3d);
GL_EXT_LOAD_OPT(glProgramUniform3dv);
GL_EXT_LOAD_OPT(glProgramUniform3ui);
GL_EXT_LOAD_OPT(glProgramUniform3uiv);
GL_EXT_LOAD_OPT(glProgramUniform4i);
GL_EXT_LOAD_OPT(glProgramUniform4iv);
GL_EXT_LOAD_OPT(glProgramUniform4f);
GL_EXT_LOAD_OPT(glProgramUniform4fv);
GL_EXT_LOAD_OPT(glProgramUniform4d);
GL_EXT_LOAD_OPT(glProgramUniform4dv);
GL_EXT_LOAD_OPT(glProgramUniform4ui);
GL_EXT_LOAD_OPT(glProgramUniform4uiv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix2fv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix3fv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix4fv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix2dv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix3dv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix4dv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix2x3fv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix3x2fv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix2x4fv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix4x2fv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix3x4fv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix4x3fv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix2x3dv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix3x2dv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix2x4dv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix4x2dv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix3x4dv);
GL_EXT_LOAD_OPT(glProgramUniformMatrix4x3dv);
GL_EXT_LOAD_OPT(glValidateProgramPipeline);
GL_EXT_LOAD_OPT(glGetProgramPipelineInfoLog);
GL_EXT_LOAD_OPT(glVertexAttribL1d);
GL_EXT_LOAD_OPT(glVertexAttribL2d);
GL_EXT_LOAD_OPT(glVertexAttribL3d);
GL_EXT_LOAD_OPT(glVertexAttribL4d);
GL_EXT_LOAD_OPT(glVertexAttribL1dv);
GL_EXT_LOAD_OPT(glVertexAttribL2dv);
GL_EXT_LOAD_OPT(glVertexAttribL3dv);
GL_EXT_LOAD_OPT(glVertexAttribL4dv);
GL_EXT_LOAD_OPT(glVertexAttribLPointer);
GL_EXT_LOAD_OPT(glGetVertexAttribLdv);
GL_EXT_LOAD_OPT(glViewportArrayv);
GL_EXT_LOAD_OPT(glViewportIndexedf);
GL_EXT_LOAD_OPT(glViewportIndexedfv);
GL_EXT_LOAD_OPT(glScissorArrayv);
GL_EXT_LOAD_OPT(glScissorIndexed);
GL_EXT_LOAD_OPT(glScissorIndexedv);
GL_EXT_LOAD_OPT(glDepthRangeArrayv);
GL_EXT_LOAD_OPT(glDepthRangeIndexed);
GL_EXT_LOAD_OPT(glGetFloati_v);
GL_EXT_LOAD_OPT(glGetDoublei_v);
#endif
#if defined(ENABLE_GL_VERSION_4_2) && defined(GL_VERSION_4_2)
GL_EXT_LOAD_OPT(glDrawArraysInstancedBaseInstance);
GL_EXT_LOAD_OPT(glDrawElementsInstancedBaseInstance);
GL_EXT_LOAD_OPT(glDrawElementsInstancedBaseVertexBaseInstance);
GL_EXT_LOAD_OPT(glGetInternalformativ);
GL_EXT_LOAD_OPT(glGetActiveAtomicCounterBufferiv);
GL_EXT_LOAD_OPT(glBindImageTexture);
GL_EXT_LOAD_OPT(glMemoryBarrier);
GL_EXT_LOAD_OPT(glTexStorage1D);
GL_EXT_LOAD_OPT(glTexStorage2D);
GL_EXT_LOAD_OPT(glTexStorage3D);
GL_EXT_LOAD_OPT(glDrawTransformFeedbackInstanced);
GL_EXT_LOAD_OPT(glDrawTransformFeedbackStreamInstanced);
#endif
#if defined(ENABLE_GL_VERSION_4_3) && defined(GL_VERSION_4_3)
GL_EXT_LOAD_OPT(glClearBufferData);
GL_EXT_LOAD_OPT(glClearBufferSubData);
GL_EXT_LOAD_OPT(glDispatchCompute);
GL_EXT_LOAD_OPT(glDispatchComputeIndirect);
GL_EXT_LOAD_OPT(glCopyImageSubData);
GL_EXT_LOAD_OPT(glFramebufferParameteri);
GL_EXT_LOAD_OPT(glGetFramebufferParameteriv);
GL_EXT_LOAD_OPT(glGetInternalformati64v);
GL_EXT_LOAD_OPT(glInvalidateTexSubImage);
GL_EXT_LOAD_OPT(glInvalidateTexImage);
GL_EXT_LOAD_OPT(glInvalidateBufferSubData);
GL_EXT_LOAD_OPT(glInvalidateBufferData);
GL_EXT_LOAD_OPT(glInvalidateFramebuffer);
GL_EXT_LOAD_OPT(glInvalidateSubFramebuffer);
GL_EXT_LOAD_OPT(glMultiDrawArraysIndirect);
GL_EXT_LOAD_OPT(glMultiDrawElementsIndirect);
GL_EXT_LOAD_OPT(glGetProgramInterfaceiv);
GL_EXT_LOAD_OPT(glGetProgramResourceIndex);
GL_EXT_LOAD_OPT(glGetProgramResourceName);
GL_EXT_LOAD_OPT(glGetProgramResourceiv);
GL_EXT_LOAD_OPT(glGetProgramResourceLocation);
GL_EXT_LOAD_OPT(glGetProgramResourceLocationIndex);
GL_EXT_LOAD_OPT(glShaderStorageBlockBinding);
GL_EXT_LOAD_OPT(glTexBufferRange);
GL_EXT_LOAD_OPT(glTexStorage2DMultisample);
GL_EXT_LOAD_OPT(glTexStorage3DMultisample);
GL_EXT_LOAD_OPT(glTextureView);
GL_EXT_LOAD_OPT(glBindVertexBuffer);
GL_EXT_LOAD_OPT(glVertexAttribFormat);
GL_EXT_LOAD_OPT(glVertexAttribIFormat);
GL_EXT_LOAD_OPT(glVertexAttribLFormat);
GL_EXT_LOAD_OPT(glVertexAttribBinding);
GL_EXT_LOAD_OPT(glVertexBindingDivisor);
GL_EXT_LOAD_OPT(glDebugMessageControl);
GL_EXT_LOAD_OPT(glDebugMessageInsert);
GL_EXT_LOAD_OPT(glDebugMessageCallback);
GL_EXT_LOAD_OPT(glGetDebugMessageLog);
GL_EXT_LOAD_OPT(glPushDebugGroup);
GL_EXT_LOAD_OPT(glPopDebugGroup);
GL_EXT_LOAD_OPT(glObjectLabel);
GL_EXT_LOAD_OPT(glGetObjectLabel);
GL_EXT_LOAD_OPT(glObjectPtrLabel);
GL_EXT_LOAD_OPT(glGetObjectPtrLabel);
#endif
#if defined(ENABLE_GL_VERSION_4_4) && defined(GL_VERSION_4_4)
GL_EXT_LOAD_OPT(glBufferStorage);
GL_EXT_LOAD_OPT(glClearTexImage);
GL_EXT_LOAD_OPT(glClearTexSubImage);
GL_EXT_LOAD_OPT(glBindBuffersBase);
GL_EXT_LOAD_OPT(glBindBuffersRange);
GL_EXT_LOAD_OPT(glBindTextures);
GL_EXT_LOAD_OPT(glBindSamplers);
GL_EXT_LOAD_OPT(glBindImageTextures);
GL_EXT_LOAD_OPT(glBindVertexBuffers);
#endif
#if defined(ENABLE_GL_VERSION_4_5) && defined(GL_VERSION_4_5)
GL_EXT_LOAD_OPT(glClipControl);
GL_EXT_LOAD_OPT(glCreateTransformFeedbacks);
GL_EXT_LOAD_OPT(glTransformFeedbackBufferBase);
GL_EXT_LOAD_OPT(glTransformFeedbackBufferRange);
GL_EXT_LOAD_OPT(glGetTransformFeedbackiv);
GL_EXT_LOAD_OPT(glGetTransformFeedbacki_v);
GL_EXT_LOAD_OPT(glGetTransformFeedbacki64_v);
GL_EXT_LOAD_OPT(glCreateBuffers);
GL_EXT_LOAD_OPT(glNamedBufferStorage);
GL_EXT_LOAD_OPT(glNamedBufferData);
GL_EXT_LOAD_OPT(glNamedBufferSubData);
GL_EXT_LOAD_OPT(glCopyNamedBufferSubData);
GL_EXT_LOAD_OPT(glClearNamedBufferData);
GL_EXT_LOAD_OPT(glClearNamedBufferSubData);
GL_EXT_LOAD_OPT(glMapNamedBuffer);
GL_EXT_LOAD_OPT(glMapNamedBufferRange);
GL_EXT_LOAD_OPT(glUnmapNamedBuffer);
GL_EXT_LOAD_OPT(glFlushMappedNamedBufferRange);
GL_EXT_LOAD_OPT(glGetNamedBufferParameteriv);
GL_EXT_LOAD_OPT(glGetNamedBufferParameteri64v);
GL_EXT_LOAD_OPT(glGetNamedBufferPointerv);
GL_EXT_LOAD_OPT(glGetNamedBufferSubData);
GL_EXT_LOAD_OPT(glCreateFramebuffers);
GL_EXT_LOAD_OPT(glNamedFramebufferRenderbuffer);
GL_EXT_LOAD_OPT(glNamedFramebufferParameteri);
GL_EXT_LOAD_OPT(glNamedFramebufferTexture);
GL_EXT_LOAD_OPT(glNamedFramebufferTextureLayer);
GL_EXT_LOAD_OPT(glNamedFramebufferDrawBuffer);
GL_EXT_LOAD_OPT(glNamedFramebufferDrawBuffers);
GL_EXT_LOAD_OPT(glNamedFramebufferReadBuffer);
GL_EXT_LOAD_OPT(glInvalidateNamedFramebufferData);
GL_EXT_LOAD_OPT(glInvalidateNamedFramebufferSubData);
GL_EXT_LOAD_OPT(glClearNamedFramebufferiv);
GL_EXT_LOAD_OPT(glClearNamedFramebufferuiv);
GL_EXT_LOAD_OPT(glClearNamedFramebufferfv);
GL_EXT_LOAD_OPT(glClearNamedFramebufferfi);
GL_EXT_LOAD_OPT(glBlitNamedFramebuffer);
GL_EXT_LOAD_OPT(glCheckNamedFramebufferStatus);
GL_EXT_LOAD_OPT(glGetNamedFramebufferParameteriv);
GL_EXT_LOAD_OPT(glGetNamedFramebufferAttachmentParameteriv);
GL_EXT_LOAD_OPT(glCreateRenderbuffers);
GL_EXT_LOAD_OPT(glNamedRenderbufferStorage);
GL_EXT_LOAD_OPT(glNamedRenderbufferStorageMultisample);
GL_EXT_LOAD_OPT(glGetNamedRenderbufferParameteriv);
GL_EXT_LOAD_OPT(glCreateTextures);
GL_EXT_LOAD_OPT(glTextureBuffer);
GL_EXT_LOAD_OPT(glTextureBufferRange);
GL_EXT_LOAD_OPT(glTextureStorage1D);
GL_EXT_LOAD_OPT(glTextureStorage2D);
GL_EXT_LOAD_OPT(glTextureStorage3D);
GL_EXT_LOAD_OPT(glTextureStorage2DMultisample);
GL_EXT_LOAD_OPT(glTextureStorage3DMultisample);
GL_EXT_LOAD_OPT(glTextureSubImage1D);
GL_EXT_LOAD_OPT(glTextureSubImage2D);
GL_EXT_LOAD_OPT(glTextureSubImage3D);
GL_EXT_LOAD_OPT(glCompressedTextureSubImage1D);
GL_EXT_LOAD_OPT(glCompressedTextureSubImage2D);
GL_EXT_LOAD_OPT(glCompressedTextureSubImage3D);
GL_EXT_LOAD_OPT(glCopyTextureSubImage1D);
GL_EXT_LOAD_OPT(glCopyTextureSubImage2D);
GL_EXT_LOAD_OPT(glCopyTextureSubImage3D);
GL_EXT_LOAD_OPT(glTextureParameterf);
GL_EXT_LOAD_OPT(glTextureParameterfv);
GL_EXT_LOAD_OPT(glTextureParameteri);
GL_EXT_LOAD_OPT(glTextureParameterIiv);
GL_EXT_LOAD_OPT(glTextureParameterIuiv);
GL_EXT_LOAD_OPT(glTextureParameteriv);
GL_EXT_LOAD_OPT(glGenerateTextureMipmap);
GL_EXT_LOAD_OPT(glBindTextureUnit);
GL_EXT_LOAD_OPT(glGetTextureImage);
GL_EXT_LOAD_OPT(glGetCompressedTextureImage);
GL_EXT_LOAD_OPT(glGetTextureLevelParameterfv);
GL_EXT_LOAD_OPT(glGetTextureLevelParameteriv);
GL_EXT_LOAD_OPT(glGetTextureParameterfv);
GL_EXT_LOAD_OPT(glGetTextureParameterIiv);
GL_EXT_LOAD_OPT(glGetTextureParameterIuiv);
GL_EXT_LOAD_OPT(glGetTextureParameteriv);
GL_EXT_LOAD_OPT(glCreateVertexArrays);
GL_EXT_LOAD_OPT(glDisableVertexArrayAttrib);
GL_EXT_LOAD_OPT(glEnableVertexArrayAttrib);
GL_EXT_LOAD_OPT(glVertexArrayElementBuffer);
GL_EXT_LOAD_OPT(glVertexArrayVertexBuffer);
GL_EXT_LOAD_OPT(glVertexArrayVertexBuffers);
GL_EXT_LOAD_OPT(glVertexArrayAttribBinding);
GL_EXT_LOAD_OPT(glVertexArrayAttribFormat);
GL_EXT_LOAD_OPT(glVertexArrayAttribIFormat);
GL_EXT_LOAD_OPT(glVertexArrayAttribLFormat);
GL_EXT_LOAD_OPT(glVertexArrayBindingDivisor);
GL_EXT_LOAD_OPT(glGetVertexArrayiv);
GL_EXT_LOAD_OPT(glGetVertexArrayIndexediv);
GL_EXT_LOAD_OPT(glGetVertexArrayIndexed64iv);
GL_EXT_LOAD_OPT(glCreateSamplers);
GL_EXT_LOAD_OPT(glCreateProgramPipelines);
GL_EXT_LOAD_OPT(glCreateQueries);
GL_EXT_LOAD_OPT(glGetQueryBufferObjecti64v);
GL_EXT_LOAD_OPT(glGetQueryBufferObjectiv);
GL_EXT_LOAD_OPT(glGetQueryBufferObjectui64v);
GL_EXT_LOAD_OPT(glGetQueryBufferObjectuiv);
GL_EXT_LOAD_OPT(glMemoryBarrierByRegion);
GL_EXT_LOAD_OPT(glGetTextureSubImage);
GL_EXT_LOAD_OPT(glGetCompressedTextureSubImage);
GL_EXT_LOAD_OPT(glGetGraphicsResetStatus);
GL_EXT_LOAD_OPT(glGetnCompressedTexImage);
GL_EXT_LOAD_OPT(glGetnTexImage);
GL_EXT_LOAD_OPT(glGetnUniformdv);
GL_EXT_LOAD_OPT(glGetnUniformfv);
GL_EXT_LOAD_OPT(glGetnUniformiv);
GL_EXT_LOAD_OPT(glGetnUniformuiv);
GL_EXT_LOAD_OPT(glReadnPixels);
GL_EXT_LOAD_OPT(glTextureBarrier);
#endif
#if defined(ENABLE_GL_VERSION_4_6) && defined(GL_VERSION_4_6)
GL_EXT_LOAD_OPT(glSpecializeShader);
GL_EXT_LOAD_OPT(glMultiDrawArraysIndirectCount);
GL_EXT_LOAD_OPT(glMultiDrawElementsIndirectCount);
GL_EXT_LOAD_OPT(glPolygonOffsetClamp);
#endif