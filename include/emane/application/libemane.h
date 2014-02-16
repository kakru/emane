/*
 * Copyright (c) 2013-2014 - Adjacent Link LLC, Bridgewater, New Jersey
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 * * Neither the name of Adjacent Link LLC nor the names of its
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef EMANEAPPLICATIONLIBEMANE_HEADER_
#define EMANEAPPLICATIONLIBEMANE_HEADER_

namespace EMANE
{
  namespace Application
  {
    /**
     * Initialize libemane
     *
     * @note Must be called once prior to using any library APIs
     */
    void initialize();
    
    /**
     * Shutdown libemane
     *
     * @note Must be called last after library usage is complete
     */
    void shutdown();
  }
}

#endif // EMANEAPPLICATIONLIBEMANE

/**
 * @mainpage EMANE
 *

 *
 * The emulator provides a set of services that are generally available to 
 * all component plugins.
 * - @ref ConfigurationService "Configuration Service"
 * - @ref EventService "Event Service"
 * - @ref StatisticService "Statistic Service"
 * - @ref TimerService "Timer Service"
 *
 *
 * MAC and Shim component plugins that are contained in NEMs using the emualtor
 * physical layer have access to radio specific services.
 * - @ref SpectrumService "Spectrum Service"
 */

